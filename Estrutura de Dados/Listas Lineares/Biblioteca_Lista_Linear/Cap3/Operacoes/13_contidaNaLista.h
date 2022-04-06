#ifndef CONTIDA_NA_LISTA_H
#define CONTIDA_NA_LISTA_H

pDLista contidaNaLista (pDLista lista1, pDLista lista2, FuncaoComparacao pfc){
    
    pNoh atual, pnl2;

    pnl2 = lista2->primeiro;

    int contador = 0;

    while(pnl2 != NULL){

        atual = lista1->primeiro;
        while(atual!=NULL){
            if(pfc(atual->info,pnl2->info)==0){
               contador++;
               pnl2 = pnl2->prox;
               break;
            }
            atual = atual->prox;
        }
        if(atual==NULL){
            pnl2 = pnl2->prox;
        }
    }

    if(contador >= lista1->quantidade){
        return 1;
    }else{
        return 0;
    }

   
}


#endif