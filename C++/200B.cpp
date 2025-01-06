#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p,t,c;
  double sum=0,res;
  cin>>n;
  c=n;
  while(n--){
     cin>>p;
     sum+=p;
  }
  t =c*100;
  res = (sum/t)*100;
  cout<<res<<endl;



    return 0;
}