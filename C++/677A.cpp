#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a,p,c=0,s;
   vector<int>v;
   cin>>n>>p;
   while(n--){
    cin>>a;
    v.push_back(a);
   }
   
    for(int i=0;i<v.size();i++){
         if(v[i]>p)
           c=c+2;
        else
        c++;
    }
    
    cout<<c;
    return 0;
}