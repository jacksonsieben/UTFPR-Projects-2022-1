#include <stdio.h>

int digitosIguais(int n, int k){
    if(n==0 && k!=0){
        return 0;
    }else{
        //return (n%10 == k) + digitosIguais(n/10, k); //forma menor com condicional no return
        if(n%10==k) {
            return 1 + digitosIguais(n/10, k);
        }else{
            return digitosIguais(n/10, k);
        }
    }
}

void main(){
    int n, k;

    printf("Informe o n: ");
    scanf("%d",&n);
    printf("Informe o k: ");
    scanf("%d",&k);

    printf("Resultado: %d", digitosIguais(n,k));
}

