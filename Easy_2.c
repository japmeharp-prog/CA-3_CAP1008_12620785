/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
   char **a = malloc(n * sizeof(char*));
   for(int i=1; i<=n; i++)
   {
    a[i-1] = malloc(12 * sizeof(char));
    if(i%3 == 0 && i%5 == 0)
    {
        sprintf(a[i-1], "FizzBuzz");
    }
    else if(i%3 == 0)
    {
        sprintf(a[i-1], "Fizz");
    }
    else if(i%5 == 0)
    {
        sprintf(a[i-1], "Buzz");
    }
    else
    {
        sprintf(a[i-1], "%d", i);
    }
   } 
   *returnSize = n;

   return a;
}
