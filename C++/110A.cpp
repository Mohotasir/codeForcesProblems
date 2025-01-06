#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  a,count=0;
    cin >> a;
    string x = to_string(a);
    for(int i=0;i<x.length();i++){
        if(x[i]=='4' || x[i]=='7'){
            count++;
        }
    }
    
    if(count== 4 || count == 7){
        cout << "YES";
    }else{
        cout << "NO";
        }



    return 0;
}