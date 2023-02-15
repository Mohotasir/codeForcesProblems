#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c=0,n=4;
   vector<int>v;
   while(n--){
    cin>>a;
     v.push_back(a);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<4;i++)
   {
     
     if(v[i]==v[i+1])
       c++;
   }
   cout<<c<<endl;


    return 0;
}