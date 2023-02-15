#include<stdio.h>
int main(){
   int  lineNum,i,j;
   scanf("%d",&lineNum);
   for(int i=0;i<=lineNum;i++){
     for(j=1;j<=i;j++){
        printf("*");
     }
     printf("\n");
     
   }

    return 0;
}