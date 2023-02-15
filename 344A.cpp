#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cnt=0,a;
  vector<int>v;
  cin>>n;
    while (n--){
          cin>>a;
    v.push_back(a);
    }
  for(int i=0;i<v.size();i++){

    if(v[i] != v[i+1]){
       cnt++;
    } 
  }
    cout<<cnt;
    return 0;
}