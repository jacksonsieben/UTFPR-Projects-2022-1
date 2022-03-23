#include <stdio.h>
#include <math.h>

void main(){

    float a = 0.3876;
    /*for (int i = 0; i < 12; i++)
    {
        a = a*2;
        if(a>1){
            //a = a-1;
            printf("%f - %f\n",a, a-1);
            a = a-1;
        }else{
            printf("%f\n",a);
        }
        
    }*/
    /*for (int i = 0; i < 10; i++)
    {
        printf("%d - %f\n",i,pow(16,i));
    }*/
    int dec = 121, rest = 0;
    for (int i = 0; ; i++){
        rest = dec%2;
        dec = dec/2;
        printf("%d - %d\n",dec, rest);
        if(dec/2<=0){
            break;
        }
    } // ex13a circuitos digitais
    
    
}