#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,count=0,x,y;
    string arr;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>arr[i];
 
    }
    while(n--){
        if(arr[n]>0 && arr[n]>=arr[k-1] ){
            count++;
        }
        
    }
     
    cout<<y<<endl;
  
    return 0;
}