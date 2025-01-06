#include<stdio.h>
int main(){
   
   int a,b,x;
   scanf("%d %d",&a,&b);
   
    x=b-a;
   if(a>b ){
    printf("Impossible\n");
   }
   if(x>17){
     printf("Impossible\n");
   }
  
   
   if(x>0 || x<=17){
      if(x==1){
        printf("1");
      }
      if(x==2){
        printf("2");
      }
      if(x==3){
        printf("3");
      }
      if(x==4){
        printf("4");
      }
      if(x==5){
        printf("5");
      }
      if(x==6){
        printf("6");
      }
      if(x==7){
        printf("6 1");
      }
      if(x==8)
         printf("6 2");
      if(x==9)
         printf("6 3");
     if(x==10)
         printf("6 4");
     if(x==11)
         printf("6 5");
     if(x==12)
         printf("6 6");
     if(x==13)
         printf("6 6 1");
     if(x==14)
     {
       printf("6 6 2");

     }
     if(x==15)
         printf("6 6 3");
     if(x==16)
         printf("6 6 4");
     if(x==17)
         printf("6 6 5");
      


   }
   

    return 0;
}