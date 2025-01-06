#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,p,q;
   set<int>P;
   set<int>Q;
   cin>>n;
   for(int i=0;i<n;i++){
     for(int j=0;j<3;j++){
         cin>>p>>q;
         P.insert(p);
         Q.insert(q);
     }
     if(P.size() == 2 && Q.size() ==2)
       cout<<"NO\n";
    else
     cout<<"YES\n";

     P.clear();
     Q.clear();
   }

    return 0;
}