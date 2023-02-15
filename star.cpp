#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   int n,nam;
   string  nm;
   cin>>n;
   while(n--){
    cin>>nm;
    nam = nm.size();
    if(nam>10){
    cout<<nm[0]<<nam-2<<nm[nam-1]<<endl;
    }else{
     cout<<nm<<endl;
    }
   }
  
 
    return 0;
}