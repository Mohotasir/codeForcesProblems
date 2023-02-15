#include<stdio.h>
int main(){
  

    int n,a,b;
    double res,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>1000){
            //c =  (a*0.10);
           // res =(a - c)*b;
           res = (a*b)*0.9;

            printf("%lf\n",res);
           
        }else{
            res = a*b;
            printf("%lf\n",res);
        }
        
    }

    return 0;
}