#include<stdio.h>

int checkAnagrams(char* string1,char* string2)
{
    char hashSet[256]={0};
    int i=0;
    
    while(*string1)
    {
                   hashSet[*string1-'a']++;
                   string1++;
    }
    
    while(*string2)
    {
                   hashSet[*string2-'a']--;
                   string2++;
    }
    
    for(i=0;i<256;i++)
                      if(hashSet[i])
                                    return 0;
    
    return 1;
}


int main()
{
    
    char first[100],second[100];
    
    fgets(first,100,stdin);
    fgets(second,100,stdin);
    
    printf("%d",checkAnagrams(first,second));
    
    system("pause");
    return 0;
}
