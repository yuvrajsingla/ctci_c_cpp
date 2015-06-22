#include<stdio.h>

void removeSpaces(char* inputString)
{
     int countSpaces=0;
     char*  iterPtr=inputString;
     
     while(*iterPtr)
     {
                    if(*iterPtr==' ')
                                    countSpaces++;
                    iterPtr++;
     }
     
     inputString--;
     while(iterPtr!=inputString)
     {
                                if(*iterPtr==' ')
                                {
                                               *(iterPtr+2*(countSpaces))='0';
                                               *(iterPtr+(2*countSpaces-1))='2';
                                               *(iterPtr+(2*countSpaces-2))='%';
                                               countSpaces--;
                                }
                                else
                                {
                                    *(iterPtr+(2*countSpaces))=*iterPtr;
                                }
     iterPtr--;
     }
     
}
                                               

int main()
{
    char s[100];
    fgets(s,100,stdin);
    
    removeSpaces(s);
    printf("%s",s);
    
    system("pause");
    return 0;
}
