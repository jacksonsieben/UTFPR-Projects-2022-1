#include <stdio.h>

int hailstone(int n){
    if(n==1){
        return 1;
    }else if(n%2 == 0){
        return n+hailstone(n/2);
    }else {
        return n + hailstone((n*3)+1);
    }
}

void main(){
    int n;

    printf("Informe o n: ");
    scanf("%d",&n);

    printf("Resultado: %d",hailstone(n));
}