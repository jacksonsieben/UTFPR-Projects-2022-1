#ifndef INVERTE_FILA_H
#define INVERTE_FILA_H

void inverteFila (pDFila pd){
    if(pd==NULL){
        printf("Fila Vazia!");
    }
    int count = pd->pdLista->quantidade;
    pNoh atual = pd->pdLista->primeiro;

    for (int i = 0; i < count; i++){
        enfileirarInfo(pd, atual->info);
        atual = atual->prox;
    }
}

#endif