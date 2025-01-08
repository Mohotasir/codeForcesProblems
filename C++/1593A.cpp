#include <bits/stdc++.h>
using namespace std;

int calculate(int a,int b,int c){
   return max(0,max(b,c)+1-a);
}

int main()
{
   int n,a,b,c;
   cin>>n;
   while (n--)
   {

      cin>>a>>b>>c;
   
   
   cout<<calculate(a,b,c)<< ' '<<calculate(b,a,c)<<' '<<calculate(c,a,b) <<endl;
   }
}
