#include<stdio.h>

char* reverseString(char* inputString)
{
      int len=0;
      int i=0;
      char temp;
      while(inputString[len])
              len++;
      len--;
      for(i=0;i<len;i++,len--)
      {
              temp=inputString[i];
              inputString[i]=inputString[len];
              inputString[len]=temp;
      }
      
      return inputString;
}


int main()
{
    char x[100];
    fgets (x, 100, stdin);
    printf("%s",reverseString(x));
    
    system("pause");
    return 0;
}
