#include<iostream>

using namespace std;


int uniqueCharacterSet(string s)
{
    int hashInt=0;
    int len=s.length();
    int i=0;
    while(i<len)
    {
                if(hashInt & 1<<(s[i]-'a'))
                           return 0;
                
                hashInt = hashInt | (1<<(s[i]-'a'));
                i++;
    }
    return 1;
    
}

int main()
{
    string input;
    cin>>input;
    if(uniqueCharacterSet(input))
        cout<<"Character Set Unique";
    else
        cout<<"Character Set Not Unique";
    
    system("pause");
    return 0;
}
