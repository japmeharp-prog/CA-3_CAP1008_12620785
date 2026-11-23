/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)  //nums:original array , numsSize:no. of elements , returnSize:total elements in new array.
{
    int *a = malloc(2 * numsSize * sizeof(int));
    for (int i=0; i<numsSize; i++)
    {
        a[i] = nums[i];
        a[i + numsSize] = nums[i];
    }
    *returnSize = 2 * numsSize;
    return a;
}
