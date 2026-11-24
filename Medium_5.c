int missingNumber(int* nums, int numsSize) 
{
    int n = numsSize; 
    int sum = n * (n+1)/2;
    int Sum=0;

    for(int i=0; i<numsSize; i++)
    {
        Sum = Sum + nums[i];
    }  
    return sum - Sum;
}
