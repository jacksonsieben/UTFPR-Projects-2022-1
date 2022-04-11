#include <stdio.h>
#include "BubbleSort.h"

struct Data{
int dia, mes, ano;
};

/* aloca memoria para guardar o inteiro N e retorna o endereco
   daquela memoria */
int* alocaInt(int n){
   int* pi = (int*) malloc(sizeof(int));
   *pi = n;
   return pi;
}
float* alocaFloat(float n){
   float* pi = (float*) malloc(sizeof(float));
   *pi = n;
   return pi;
}
struct Data* alocaData(int d, int m, int a){
   struct Data* pi = (struct Data*) malloc(sizeof(struct Data));
   pi->dia = d;
   pi->mes = m;
   pi->ano = a;
   return pi;
}

int comparaInteiros(void* a, void* b){
  int* i1 = (int*) a;
  int* i2 = (int*) b;
  return *i2 - *i1;
}
int comparaInteirosDESC(void* a, void* b){
  int* i1 = (int*) a;
  int* i2 = (int*) b;
  return *i1 - *i2;
}
int comparaFloat(void* a, void* b){
  float* i1 = (float*) a;
  float* i2 = (float*) b;
  return *i2 - *i1;
}
int comparaData(void* a, void* b){
  struct Data* i1 = (struct Data*) a;
  struct Data* i2 = (struct Data*) b;
  return i2->ano - i1->ano;
}

/* programa principal */
void main()
{
   int i;
   int* vi[5];
   vi[0] = alocaInt(6);
   vi[1] = alocaInt(3);
   vi[2] = alocaInt(5);
   vi[3] = alocaInt(1);
   vi[4] = alocaInt(2);
   bubbleSort(vi, 5, comparaInteiros);
   for (i=0; i<5; i++){
      printf("%d - ", *vi[i]);
   }
   bubbleSort(vi, 5, comparaInteirosDESC);
   for (i=0; i<5; i++){
      printf("%d - ", *vi[i]);
   }

   float* vf[5];
   vf[0] = alocaFloat(2.5f);
   vf[1] = alocaFloat(1.8f);
   vf[2] = alocaFloat(3.4f);
   vf[3] = alocaFloat(0.3f);
   vf[4] = alocaFloat(0.325f);

   bubbleSort(vf, 5, comparaFloat);
   for (i=0; i<5; i++){
      printf("%f - ", *vf[i]);
   }


   struct Data* vd[5];
   vd[0] = alocaData(01, 05, 2010);
   vd[1] = alocaData(05, 04, 2011);
   vd[2] = alocaData(1,   9, 2009);
   vd[3] = alocaData(30,  8, 2018);
   vd[4] = alocaData(07,  5, 2010);

   bubbleSort(vd, 5, comparaData);
   for (i=0; i<5; i++){
      printf("%d/%d/%d - ", vd[i]->dia, vd[i]->mes, vd[i]->ano);
   }
}

