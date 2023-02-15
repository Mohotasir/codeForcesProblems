#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 int n,sum[100],s=0;
  cin>>n;
 for(int i=0;i<n;i++){
    cin>>sum[i];
    s = s+sum[i];
 }
 if(s%2==0){
    cout<<n;
 }else{
    cout<<n-1;
 }



return 0;
}