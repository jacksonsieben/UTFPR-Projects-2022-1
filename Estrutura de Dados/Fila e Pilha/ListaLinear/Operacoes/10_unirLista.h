#ifndef UNIR_LISTA_H
#define UNIR_LISTA_H

pDLista unirLista (pDLista lista1, pDLista lista2, FuncaoComparacao pfc, FuncaoAlocacao pfa){
    pDLista pNovaLista;

    pNovaLista = duplicarLista(lista1, pfa);
    pNoh atual, pnl2;

    pnl2 = lista2->primeiro;

    while(pnl2 != NULL){

        atual = pNovaLista->primeiro;
        while(atual!=NULL){
            if(pfc(atual->info,pnl2->info)==0){
               pnl2 = pnl2->prox;
               break;
            }
            atual = atual->prox;
        }
        if(atual==NULL){
            incluirInfo(pNovaLista, pnl2->info);
            pnl2 = pnl2->prox;
        }
    }

    return pNovaLista;
}

#endif
