#include<bits/stdc++.h>
using namespace std;
int main(){
   int a , b, c,p,q,r,s,t;
   cin>>a>>b>>c;
   p = a + b*c;
   q = a*(b+c);
   r = a*b*c;
   s = (a+b)*c;
   t = a+b+c;
   vector<int>v;
   v.push_back(p);
   v.push_back(q);
   v.push_back(r);
   v.push_back(s);
   v.push_back(t);
   sort(v.begin(),v.end());
   int len =v.size();
   cout<<v[len-1];



    return 0;
}