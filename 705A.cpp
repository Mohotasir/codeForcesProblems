#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string h = "I hate";
    string l = "I love";
    for(int i = 1; i <= n-1; i++){
        if(n>1){
            if(i % 2 == 0)
              cout<<l<<" that ";
            else  
              cout<<h<<" that ";
         }
    }
    if(n % 2 == 0)
       cout<<" I love it";
    else 
       cout<<" I hate it";



    return 0;
}