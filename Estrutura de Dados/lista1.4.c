#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *readType()
{
    char *type;
    type = (char *)malloc(sizeof(char) * 10);

    printf("Informe o tipo de numero: ");
    scanf("%s", type);

    // printf("%s", type);
    return type;
}

float *readFloat()
{
    float *num;
    num = (float *)malloc(sizeof(float));
    printf("Informe um numero: ");
    scanf("%f", num);

    return num;
}

int *readInt()
{
    int *num;
    num = (int *)malloc(sizeof(int));
    printf("Informe um numero: ");
    scanf("%d", num);

    return num;
}

char *compareType()
{
    void *result;
    // char *type = readType();
    if (strcmp(*readType(), "inteiro") == 0)
    {
        readInt();
        result = (int *)malloc(sizeof(int));
        result = readInt();
        result = ((int *)result + *readInt());
        printf("int %d", (int *)result);
    }
}

void main()
{
    compareType();
    /*float *result;
    result = (float *)malloc(sizeof(float));
    result = readFloat();
    *result = (*result + *readFloat());

    printf("A soma e = %.2f", *result);*/
}