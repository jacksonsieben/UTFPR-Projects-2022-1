#ifndef DISJUNCAO_LISTA_H
#define DISJUNCAO_LISTA_H

pDLista disjuncaoLista (pDLista lista1, pDLista lista2, FuncaoComparacao pfc){
    
    pNoh atual, pnl2;

    pnl2 = lista2->primeiro;

    while(pnl2 != NULL){

        atual = lista1->primeiro;
        while(atual!=NULL){
            if(pfc(atual->info,pnl2->info)==0){
               return 0;
            }
            atual = atual->prox;
        }
        if(atual==NULL){
            pnl2 = pnl2->prox;
        }
    }

    return 1;
}


#endif