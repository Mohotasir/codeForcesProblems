#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,x,y,a,b;
   vector<int>X,Y;
   cin>>n;
   cin>>x>>y;
   while(x--){
      cin>>a;
      X.push_back(a);
      
   }
   while(y--){
    cin>>b;
     Y.push_back(b);
   }
   for(int i=1;i<=X.size();i++){
        if(X[i]==n ){
             cout<<"I become the guy.";
             return 0;
        }
   } 
   for(int j = 1; j<=Y.size();j++){
      if(Y[j]==n){
            cout<<"I become the guy.";
             return 0;
        }
   }
   cout<<"Oh, my keyboard!";

  


    return 0;
}