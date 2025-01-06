#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1=0,c2=0;
    string s;
    cin>>n;
    cin>>s;
    while(n--){
        
        if(s[n]=='A')
           c1++;
        if(s[n]=='D')
           c2++;
    }
    if(c1>c2){
        cout<<"Anton"<<endl;
    }else if(c2>c1){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }



    return 0;
}