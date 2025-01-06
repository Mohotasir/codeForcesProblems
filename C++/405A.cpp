#include<bits/stdc++.h>
using namespace std;

int main(){
   int n ;
   vector<int>bx;
   cin>>n;
   while (n--)
   {
      int b;
      cin>>b;
      bx.push_back(b);
   }
   sort(bx.begin(), bx.end());
   for(int i=0;i<bx.size();i++){
       cout<< bx[i] << " ";
   }
   
}