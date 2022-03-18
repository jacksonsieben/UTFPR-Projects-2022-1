#include <stdio.h>

int MDC(int a, int b){
    if(b==0){
        return a;
    } else{
        return MDC(b,(a%b));
    }
}

void main(){
    int a,b;
    printf("Informe o a: ");
    scanf("%d",&a);
    printf("Informe o b: ");
    scanf("%d",&b);

    printf("Resultado: %d", MDC(a,b));
}
