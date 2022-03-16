#include <stdio.h>

typedef  int (*FuncaoComparacao)(void*, void*);

/* funcao de ordenacao Bubble Sort */
void bubbleSort(void* dados[], int tam, FuncaoComparacao fc)
{
    int i, j;
    void *temp; // "int temp" alterei para nao dar erro
    for (i=0; i<tam-1; i++){
       printf("Iteracao %d  \n", i+1);

       for (j=0; j<tam-(i+1); j++){

         /* chama a funcao de comparacao por meio do ponteiro FC */
         if (fc(dados[j],dados[j+1]) < 0){
            printf("  Trocando... \n");
            temp       = dados[j];
            dados[j]   = dados[j+1];
            dados[j+1] = temp;
         }
       }
    }
}
