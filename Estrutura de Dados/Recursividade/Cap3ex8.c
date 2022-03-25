#include <stdio.h>

int russa(int a, int b){
    if(a==1){
        return b;
    }else if(a>1 && a%2==0){ 
        return russa(a/2, b*2);
    }else if(a>1 && a%2!=0){
        return (b+russa(a/2, b*2));
    }
}

void main(){ 
    int a, b;

    printf("Informe o a: ");
    scanf("%d",&a);

    printf("Informe o b: ");
    scanf("%d",&b);
    
    printf("Resultado: %d", russa(a,b));
}