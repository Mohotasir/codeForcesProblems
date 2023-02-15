#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,temp;
    string s;
    vector<int>v;

    cin>>s;
    for(i=0;i<s.size();i++){
         if(s[i]>= '0' && s[i] <= '9')
            v.push_back(s[i] - '0');
        
         
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(i=1;i<v.size();i++){
        cout<<"+"<<v[i];
    }
    
    

    return 0;
}