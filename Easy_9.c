int numIdenticalPairs(int* nums, int numsSize) 
{
    int count = 0;
    for(int i=0; i < numsSize; i++)                //selects 1 element from the array.
    {
        for(int j= i+1; j < numsSize; j++)         //checks the elements that come after selected one
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
    }
    return count;
}
