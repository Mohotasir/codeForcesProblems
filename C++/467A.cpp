#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p,q,s,c=0;
  cin>>n;
  while (n--)
  {
    cin>>p>>q;
    s = q-p;
   
    if(p<q && s != 1)
      c++;
    
  }
  cout<<c<<endl;
  


    return 0;
}