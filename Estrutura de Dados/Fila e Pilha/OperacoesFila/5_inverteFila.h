#ifndef INVERTE_FILA_H
#define INVERTE_FILA_H


void inverteFila (pDFila pd){
    if(pd==NULL){
        printf("Fila Vazia!");
    }else{
        pDPilha pilha = criarPilha();
        int count = pd->pdLista->quantidade;

        for (int i = 0; i < count; i++){
            empilharInfo(pilha, desenfileirarInfo(pd));
        }
        for (int i = 0; i < count; i++){
            enfileirarInfo(pd, desempilharInfo(pilha));
        }
    }
    
}

#endif