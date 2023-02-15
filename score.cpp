#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int n,f,num,arr[100],count=0;
  cin>>n>>f;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  num = sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+num);
 
  
  for(int i=1;i<=n;i++){
    if(arr[i]>=arr[f]){
        count++;
    }
  }
  cout<<count<<endl;

 return 0;
}