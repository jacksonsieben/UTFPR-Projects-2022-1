#include <stdio.h>

int potenciacaoRecursivo (int p, int n){
    if(n==0){
        return 1;
    }else{
        return p * potenciacaoRecursivo(p,n-1);
    }
}

void main(){
    int p, n;
    printf("Informe o p: ");
    scanf("%d", &p);

    printf("Informe o n: ");
    scanf("%d", &n);

    printf("O resultado e = %d", potenciacaoRecursivo(p,n));
}