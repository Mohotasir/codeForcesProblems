#include<iostream>
#include<string.h>
using namespace std;

int main(){
   int i,j,n,k;
   char sen[100000];
   
   cin.getline(sen,n);
  
  char key[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; 
  n= strlen(sen);
  
   k=strlen(key);
   for(i=0;i<n;i++){
       for(j=0;j<k;j++){
          if(sen[i]==' '||sen[i]=='\n')
                    break;
                else if(sen[i]==key[j])
                { 
                     sen[i]=key[j-1];
                     break;
                  
                }
       }
      
   }

   cout<<sen<<endl;
  


return 0;
}