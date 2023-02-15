#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,x,y,z,sum1=0,sum2=0,sum3=0;
   cin>>a;
   for(int i=0;i<a;i++){
       cin>>x>>y>>z;
       sum1 +=x;
       sum2 +=y;
       sum3 +=z;

   }
  if(sum1 ==0 && sum2==0 && sum3 ==0){
     cout<<"YES";
  }else{
     cout<<"NO";
  }

    return 0;
}