#include<iostream>
#include<cmath>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string in;
    int len;
    cin >> in;
   
    len = in.size();
    cout<<len<<endl;
    for(int i = 0 ; i < len ; i++){
        if(in[i]>='A' && in[i] <= 'Z')
             in[i] = in[i] +32;
        if(in[i]=='a'||in[i]=='e'||in[i]=='i'||in[i]=='o'||in[i]=='y'||in[i]=='u'||in[i]=='A'||in[i]=='E'||
           in[i]=='I'||in[i]=='O'||in[i]=='U'||in[i]=='Y')
             in[i] = false;
          
            if(in[i]){
           cout<<"."<<in[i];
           
    }
    
          
    }

   return 0;
}