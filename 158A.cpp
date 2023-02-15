#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,a,c=0,cn=0;
   vector<int>v;
   cin>>n>>k;
   while (n--)
   {
     cin>>a;
     v.push_back(a);
     
   }
   for(int i=0;i<v.size();i++){
      if(v[n-i]>=v[k] ){
         c++;
     }
   }
   
     cout<<c;
   


    return 0;
}