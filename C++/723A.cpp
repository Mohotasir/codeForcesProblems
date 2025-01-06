#include<bits/stdc++.h>
using namespace std;

int main(){
   int x,y,z;
   cin>>x>>y>>z;
   vector<int>v;
   v.push_back(x);
   v.push_back(y);
   v.push_back(z);
   sort(v.begin(),v.end());
   int mid = v[1];
   cout << (mid - v[0])+(v[2]-mid) <<endl;
}