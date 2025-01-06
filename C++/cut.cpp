#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
  int n,sel[3],s=1;
  cin>>n;
  while(n--){
     for( long long int i=0;i<3;i++){
         cin>>sel[i];
     }
    sort(sel,sel+3);
       if(sel[1]*sel[1] +sel[0]*sel[0] == sel[2]*sel[2]){
          cout<<"Case "<<s++ <<": yes"<<endl;
       }else{
          cout<<"Case "<<s++<<": no"<<endl;
       }
       
           
  }


  return 0;
}
  