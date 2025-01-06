#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >>n ;
   while (n--)
   {
      string s ;
      cin >>s;
      if (s == "abc"){
         cout<<"YES"<<endl;
      }else if ( s == "cab" || s == "bca"){
         cout<< "NO"<<endl;
      }else{
         cout<< "YES"<<endl;
      }
   }
   
}