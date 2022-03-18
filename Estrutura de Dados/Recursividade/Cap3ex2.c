#include <stdio.h>

int multiplicacao(int x, int y){
    if(y==0){
        return 0;
    }else {
        return x + multiplicacao(x, y-1);
    }
}

void main(){
    int x, y;

    printf("Informe o x: ");
    scanf("%d",&x);
    printf("Informe o y: ");
    scanf("%d",&y);

    printf("\nResultado: %d", multiplicacao(x,y));
}