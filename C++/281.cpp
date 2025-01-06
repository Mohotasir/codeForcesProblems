#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    char in[100];
    int len,count=0,n=0;
    cin >> in;
   
    len = strlen(in);
    sort(in,in+len);
    for(int i = 0 ; i < len ; i++){
        if(in[i]==in[i+1]){
             count++;
        }
        n++;     
   }
   int p = n-count;
    if(p%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }

   return 0;
}