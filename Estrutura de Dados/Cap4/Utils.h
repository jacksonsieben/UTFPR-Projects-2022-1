#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

/* ---------------------------------------- */
/* tipo de dado INT */
/* ---------------------------------------- */
int comparaInt(void *info1, void *info2){
    int *p1 = (int *) info1;
    int *p2 = (int *) info2;
    return *p2 - *p1;
}
/* ---------------------------------------- */
void imprimeInt(void *info){
   int *pi = (int *) info;
   printf("%d - ", *pi);
}
/* ---------------------------------------- */
void* alocaInfoInt(void *info){
   int * pi = (int *) malloc(sizeof(int));
   *pi = *((int*)info);
   return pi;
}
/* ---------------------------------------- */
int* alocaInt(int n){
   int *pi = (int *) malloc(sizeof(int));
   *pi = n;
   return pi;
}

/* ---------------------------------------- */
/* tipo de dado STRUCT Data */
/* ---------------------------------------- */
struct Data{
   int dia, mes, ano;
};
/* ---------------------------------------- */
int          comparaData  (void *info1, void *info2){
    struct Data *p1 = (struct Data *) info1;
    struct Data *p2 = (struct Data *) info2;
    return ((p2->ano - p1->ano)*365) +
           ((p2->mes - p1->mes)*30)  +
            (p2->dia - p1->dia)  ;
}
/* ---------------------------------------- */
void         imprimeData  (void *info){
   struct Data *pd = (struct Data *) info;
   printf("%d/%d/%d - ", pd->dia, pd->mes, pd->ano);
}
/* ---------------------------------------- */
void*        alocaInfoData(void *info){
   struct Data * pd = (struct Data *) malloc(sizeof(struct Data));
   pd->dia = ((struct Data*)info)->dia;
   pd->mes = ((struct Data*)info)->mes;
   pd->ano = ((struct Data*)info)->ano;
   return pd;
}
/* ---------------------------------------- */
struct Data* alocaData    (int dia, int mes, int ano){
   struct Data *pd = (struct Data *) malloc(sizeof(struct Data));
   pd->dia = dia;
   pd->mes = mes;
   pd->ano = ano;
   return pd;
}
/* ---------------------------------------- */
/*               Exercicios                 */
/* ---------------------------------------- */

void * alocaVoid(char palavra){
   char *p = malloc(sizeof(char));
   *p = palavra;
   return p;
}

char alocaChar(void *info){
   char *p = malloc(sizeof(char));
   *p = *(char *) info;
   return *p;
}

int palindroma(char palavra[]){
   int tam = strlen(palavra);
   char invPalavra[tam];

   pDPilha pilha = criarPilha();

   for (int i = 0; i < tam; i++){
      empilharInfo(pilha, alocaVoid(palavra[i]));
   }
   for (int i = 0; i < tam; i++){
     invPalavra[i] = alocaChar(desempilharInfo(pilha));
   }
   for (int i = 0; i < tam; i++){
      if(palavra[i]!=invPalavra[i]){
         return 0;
      }
   }
   return 1;     
}

int balanceamento (char expre[]){
   pDPilha pilha = criarPilha();

   int tam = strlen(expre);

   if(tam % 2 !=0){
      return 0;
   }
   for (int i = 0; i < tam; i++){
      if(expre[i]=='('){
         empilharInfo(pilha, alocaVoid('('));
      }else if (expre[i] == ')'){
         desempilharInfo(pilha);
      }
   }
   return pilhaVazia(pilha);
   
}

#endif /* UTILS_H */
