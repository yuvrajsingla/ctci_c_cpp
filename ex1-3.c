#include<stdio.h>

void removeDuplicate(char* inputString)
{
      int hashInt=0;
      char* fillPoint=inputString;
      
      while(*inputString)
      {
                         if(hashInt & ( 1<< (*inputString-'a')))
                         {
                                    inputString++;
                                    continue;
                         }
                         hashInt|=(1<<(*inputString-'a'));
                         *fillPoint=*inputString;
                         inputString++;
                         fillPoint++;
      }
      while(*fillPoint)
      {
                       inputString=fillPoint;
                       fillPoint++;
                       *inputString=NULL;
      }
}
void reverse(char *str) {
    char * end = str;
    char tmp;
    if (str)
    {
            while (*end) 
            {
                ++end;
            }
            --end;
            while (str < end) 
            {
                tmp = *str;
                *str++ = *end;
                *end-- = tmp;
            }
    }
}


int main()
{
    char x[100];
    fgets (x, 100, stdin);
    removeDuplicate(x);
    printf("%s",x);
    
    system("pause");
    return 0;
}
