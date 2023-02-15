
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int len,i;
    cin>>input;
    len =input.length();
    for(i=0;i<len;i++)
    {
        if(input[i]=='H' || input[i]=='Q' || input[i]=='9' || input[i]=='+')
        {
             cout<<"YES"<<endl;
             return 0;
            
        }
    }
 
        cout<<"NO"<<endl;
 
    return 0;
}