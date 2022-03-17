#include <stdio.h>

int fatorialRecursivo(int n){
    if(n==0){
        return 1;
    }else {
        return n * fatorialRecursivo(n-1);
    }
}

void main(){
    int i;
    printf("Informe um numero para o fatorial: ");
    scanf("%d",&i);
    
    printf("O fatorial de %d e = %d", i, fatorialRecursivo(i));
}