bool isPalindrome(char* s) 
{
   int left = 0;
   int right = strlen(s) - 1;
   while(left < right)
   {
      if(!isalnum(s[left]))                          //isalnum() is predefined in ctype.h to check whether a character is an alphabet or a digit.
      {
        left++;
      }
      else if(!isalnum(s[right]))
      {
        right--;
      }
      else
      {
        if(tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
      }
   } 
   return true;
}
