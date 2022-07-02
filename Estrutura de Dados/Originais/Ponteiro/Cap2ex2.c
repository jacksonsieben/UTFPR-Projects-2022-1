#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "BubbleSort.h"

char *alocaString(char *nome)
{
    char *str = (char *)malloc(sizeof(char));
    strcpy(str, nome);
    return str;
}

int comparaString(void *a, void *b)
{
    char *str1 = (char *)a;
    char *str2 = (char *)b;

    int t = strcmp(str2, str1);
    // printf("strcmp %d", t);
    return t;
    // return strcmp(str1, str2);
    // return *str1 - *str2;
}

void main()
{
    void *nomes[4];
    nomes[0] = alocaString("evando");   //   5
    nomes[1] = alocaString("jackson");  //  7
    nomes[2] = alocaString("adelino");  //  7
    nomes[3] = alocaString("leonardo"); // 8
    /*for (int i = 0; i < 4; i++){
        printf("vetor[%d] = %s\n", i, nomes[i]);
    }*/
    //bubbleSort(nomes, 4, comparaString);
    bubbleSort(nomes, 4, strcmp);
    for (int i = 0; i < 4; i++)
    {
        printf("vetor[%d] = %s\n", i, (char *)nomes[i]);
    }
}