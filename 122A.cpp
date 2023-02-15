#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,c=0,len,a;
 cin>>n;
 string s = to_string(n);
 
 
 
 len = s.size();
 for(int i=0;i<s.size();i++){
    if(s[i] =='4' ||s[i]=='7')
       c++;
       
 }
 if(n%4==0 || n%7==0 || n%47==0){
    cout<<"YES";
 } else if(len==c){
     cout<<"YES";
  }else{
     cout<<"NO";
  }
 
 return 0;
}