#include<bits/stdc++.h>
using namespace std;
int main(){
  string in;
  int c0=0;
  cin>>in;
  int len = in.size();
  for(int i=1;i<=len;i++){
   
      
        if(in[i-1]==in[i]){
          c0++;
         if(c0>=6)
          break;
         }else
            c0=0;
  }
      if(c0>=6){
        cout<<"YES";
      }else{
        cout<<"NO";
      }
  
   
   
  

    return 0;
}