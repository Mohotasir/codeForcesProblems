#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int evn=0,odd=0;
   long long int n,e,o;
   cin>>n;
//    for(int i=1;i<=n;i++){
//       if(i%2==0) odd+=i;
//        else evn+=i;

//    }
//    if(odd>evn)
//         cout<<odd-evn<<endl;
//     else 
//         cout<<-(evn-odd)<<endl;
  e = n/2;
  o = e + n%2;
  evn = e*(e+1);
  odd = o*o;
  cout<<evn-odd<<endl;

    return 0;
} 