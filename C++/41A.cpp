#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int len,count=0;
    cin>>s>>t;  
    len = s.size();
    for(int i=0;i<len;i++){
        if(len>1){
        if(s[i]==t[len-i-1]){
            count++;
        }
        }
        if(len==1){
            if(s==t && s[i]==t[len-i-1])
              count++;
            else
              count=0;
        }
        
        
        
    }
    
    count==len?cout<<"YES":cout<<"NO";



    return 0;
}