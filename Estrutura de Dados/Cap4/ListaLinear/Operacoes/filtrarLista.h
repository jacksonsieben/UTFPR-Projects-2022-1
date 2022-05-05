#ifndef FILTRAR_LISTA_H
#define FILTRAR_LISTA_H

pDLista filtrarLista (pDLista pd, FuncaoFiltro ff){
    pDLista novaLista = criarLista();

    pNoh atual;

    atual = pd->primeiro;

    int count = 1;

    if(pd != NULL){
        while(atual != NULL){
            if(ff(atual->info)==1){
                incluirInfo(novaLista, atual->info);
                excluirInfoPos(pd, count);
            }
            atual = atual->prox;
            count++;
        }
    }
    return novaLista;    
}
#endif