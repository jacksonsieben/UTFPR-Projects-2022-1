#ifndef DIVIDIR_LISTA_VALOR_H
#define DIVIDIR_LISTA_VALOR_H

pDLista dividirListaValor(pDLista pListaOriginal, FuncaoComparacao pfc, void *info){
   pDLista pNovaLista = criarLista();

   pNoh atual, ant;

   atual = pListaOriginal->primeiro;
   ant   = NULL;

   int contador = 1;

   while(atual != NULL){
      if (pfc(atual->info, info) == 0){
         break;
      }
      ant   = atual;
      atual = atual->prox;
      contador++;
   }

   if(atual != NULL){
      if(contador == pListaOriginal->quantidade){
         printf("Impossivel dividir a lista em seu ultimo noh!");
         return NULL; // devo retornar nulo para informar que a lista deu erro?
      }else{
         pNovaLista->primeiro   = atual->prox;
         pNovaLista->ultimo     = pListaOriginal->ultimo;
         pNovaLista->quantidade = pListaOriginal->quantidade - contador;

         pListaOriginal->ultimo = atual;

         atual->prox = NULL;
      }
   }
   
   return pNovaLista;
}

#endif