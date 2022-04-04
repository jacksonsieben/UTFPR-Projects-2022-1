#ifndef INCLUIR_INFO_INICIO_H
#define INCLUIR_INFO_INICIO_H

void incluirInfoInicio(pDLista pd, void *info){

    if(pd==NULL){
        printf("Lista nao existe ainda, nao eh possivel incluir!");
        return;
    }

    pNoh pNovo = malloc(sizeof(Noh));

    pNovo->info = info;
    pNovo->prox = pd->primeiro;

    //pNoh auxPrimeiro = pd->primeiro;

    pd->primeiro = pNovo;
    pd->quantidade++;

    if(pd->ultimo == NULL){
        pd->ultimo = pNovo;
    }
}



#endif