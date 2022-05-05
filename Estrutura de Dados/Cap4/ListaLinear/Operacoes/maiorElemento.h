#ifndef MAIOR_ELEMENTO_H
#define MAIOR_ELEMENTO_H

void* maior(pNoh atual, void *info, FuncaoComparacao pfc){
    if(atual == NULL){
        return info;
    }
    if(pfc(atual->info, info) > 0){
        maior(atual->prox, atual->info, pfc);
    }
    maior(atual->prox, info, pfc);
}


void* maiorElemento (pDLista pd, void* maiorAtual, FuncaoComparacao fc){
    return maior(pd->primeiro, pd->primeiro->info, fc);
}

#endif