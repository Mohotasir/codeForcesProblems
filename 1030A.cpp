#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,c=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        if(v[i]==1)
           c++;
    }
    if(c>=1)
      cout<<"HARD";
    else 
      cout<<"EASY";



    
    




    return 0;
}