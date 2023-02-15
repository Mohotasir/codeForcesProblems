#include<iostream>
#include<iomanip>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
   
   int arr[4],cnt=0;
   for(int i=0;i<4;i++)
      cin>>arr[i];
  
  sort(arr,arr+4);
  for(int i=0;i<3;i++){
     if(arr[i]==arr[i+1])
      cnt ++;
  }
   
   cout<<cnt<<endl;

return 0;
}