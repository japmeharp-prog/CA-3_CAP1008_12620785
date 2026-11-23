int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for(int i = 0; i < numsSize; i++)             //checks every no. one by one in array
    {
        int num = nums[i];                        //takes the current no. from the array.
        int digits = 0;
        while(num > 0)
        {
            digits++;
            num = num/10;
        }
        if(digits % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
