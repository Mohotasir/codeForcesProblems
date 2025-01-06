#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,d;
   cin>>n;
   d = n/2;
   for(int i = 1 ; i <= n; i++){
     for(int j = 1 ; j <= n ; j++){

        if(  j >= d && j <= d+1  )
             cout<<" * ";
        else if(i >= d && i <= d+1)
            cout<<" * ";
        else
         cout<<" . ";
          
    }
    
     cout<<"\n";
    
   }
    return 0;
}