int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0, i,j;
    for(i=0 ; i<accountsSize; i++)
    {
        int sum = 0;
        for(j = 0; j<accountsColSize[i]; j++)        //accountsColSize:total no. bank a/c in each customer's row.
        {
            sum = sum + accounts[i][j];
        }
        if(sum > max)
        {
            max = sum;
        }
    }
    return max;
