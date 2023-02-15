#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a,c=1;
   vector<int>v;
   cin>>n;
   while(n--){
      cin>>a;
      v.push_back(a);
   }
   for(int i=0;i<v.size();i++){
      if(v[i]<=v[i+1]){
        c++;
      }else{
        break;
      }
   }
   if(c==v.size())
     cout<<c;
    else
      cout<<c+1;
    return 0;
}