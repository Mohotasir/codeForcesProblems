#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
      int a,b,c,m,usedC,rw1,rw2,total;
      cin>>m>>a>>b>>c;
      usedC  = min(c , m - min(a,m));
      rw1 = min(m,a) + usedC ;
      rw2 = min(m,b) + min(c- (usedC) , m - min(b,m));
      total = rw1 + rw2;
      cout<< total <<endl;

    }
    
}