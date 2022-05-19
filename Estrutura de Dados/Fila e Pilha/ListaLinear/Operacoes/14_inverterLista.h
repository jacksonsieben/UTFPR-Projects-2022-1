#ifndef INVERTER_LISTA_H
#define INVERTER_LISTA_H

void inverterLista (pDLista pd, FuncaoAlocacao fa){
    pDLista novaLista = duplicarLista (pd, fa);

    destruirLista (pd);
    pNoh atual = novaLista->primeiro;

    while(atual != NULL){
        incluirInfoInicio(pd, atual->info);
        atual = atual->prox;
    }
    destruirLista(novaLista);
    free(novaLista);
}

#endif