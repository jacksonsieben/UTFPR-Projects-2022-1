#include <stdio.h>

float* readNumber (){
    float *num;
    num = (float *)malloc(sizeof(float));
    printf("Informe um numero: ");
    scanf("%f", num);

    return num;
}

void main(){
    float *result;
    result = (float *)malloc(sizeof(float));
    result = readNumber();
    *result = (*result + *readNumber());

    printf("A soma e = %.2f", *result);
}