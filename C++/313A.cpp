#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,len,c=0;
   cin>>n;
   string s = to_string(n);
   len =s.size();
   if(n>=0){
      cout<<n;
    }else{
         s[len-1] = '\0';
         if(s[len-1]>s[len-2])
           s[len-2] = ' ';
         else if(s[len-1]<s[len-2])
           s[len-2] = ' ';
            
          

           
      
     
      cout<<s;

    }
      
   




    return 0;
}