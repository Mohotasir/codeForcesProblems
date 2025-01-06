#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  int  len,cnt = 0;
  string arr;
  cin>>arr;
  len = arr.size();

  for(int i=0;i<len;i++){
      if(arr[i]=='+')
         arr[i]=false;
  }
      
      
  sort(arr.begin(),arr.end());
  for(int i=0;i<len;i++){
   
       cout<<"+"<<arr[i];       
  }   
   return 0;
}