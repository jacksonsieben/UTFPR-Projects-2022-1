#ifndef INTERSECAO_LISTA_H
#define INTERSECAO_LISTA_H

pDLista intersecaoLista (pDLista lista1, pDLista lista2, FuncaoComparacao pfc){
    pDLista pNovaLista = criarLista();
    
    pNoh atual, pnl2;

    pnl2 = lista2->primeiro;

    while(pnl2 != NULL){

        atual = lista1->primeiro;
        while(atual!=NULL){
            if(pfc(atual->info,pnl2->info)==0){
               incluirInfo(pNovaLista,pnl2->info);
               pnl2 = pnl2->prox;
               break;
            }
            atual = atual->prox;
        }
        if(atual==NULL){
            pnl2 = pnl2->prox;
        }
    }

    return pNovaLista;
}


#endif