/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) 
{
   int **a = malloc(numsSize * numsSize * sizeof(int*));
    *returnColumnSizes = malloc(numsSize * numsSize * sizeof(int));
    *returnSize = 0;
    int temp;
    for(int i =0; i<numsSize; i++)
    {
        for(int j=0; j<numsSize-i-1; j++)
        {
            if(nums[j] > nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < numsSize - 2; i++)
    {
        if(i > 0 && nums[i] == nums[i-1])
            continue;

        int left = i + 1;
        int right = numsSize - 1;

        while(left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0)
            {
                a[*returnSize] = malloc(3 * sizeof(int));

                a[*returnSize][0] = nums[i];
                a[*returnSize][1] = nums[left];
                a[*returnSize][2] = nums[right];

                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                left++;
                right--;

                while(left < right && nums[left] == nums[left-1])
                    left++;
            }
            else if(sum < 0)
                left++;
            else
                right--;
        }
    }

    return a;
} 
