#include <stdio.h>

int sucessor(int x){    return x+1;}

int antecessor(int x){  return x-1;}

int soma(int x, int y){
    if(y==0){
        return x;
    }else{
        return soma(sucessor(x), antecessor(y));
    }
}

void main(){
    int x,y;
    printf("Informe o x: ");
    scanf("%d",&x);
    printf("Informe o y: ");
    scanf("%d",&y);

    printf("Resultado: %d", soma(x,y));
}