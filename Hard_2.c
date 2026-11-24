/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) 
{
   int *a = malloc(numsSize * sizeof(int));
   *returnSize = numsSize;
   int prefix = 1;
   for(int i=0; i<numsSize; i++)
   {
     a[i] = prefix;
     prefix = prefix * nums[i];
   } 
   int suffix = 1;
   for(int i=numsSize - 1; i>=0; i--)
   {
      a[i] = a[i] * suffix;
      suffix = suffix * nums[i];
   }
   return a;
}
