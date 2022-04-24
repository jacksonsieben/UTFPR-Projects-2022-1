#ifndef EXCLUIR_INFO_H
#define EXCLUIR_INFO_H

int excluirInfo(pDLista pd, void *info, FuncaoComparacao pfc){

    pNoh atual, ant;

    atual = pd->primeiro;
    ant   = NULL;

    /* encontra a informa��o na lista */
    while(atual != NULL){
       if (pfc(atual->info, info) == 0)
          break;
       ant   = atual;
       atual = atual->prox;
    }

    /* verifica se a info existe na lista */
    if (atual != NULL){
        /* eh o primeiro da lista */
        if (atual == pd->primeiro)
            pd->primeiro = atual->prox;
            //alterei para a ideia de uma lista com 1 nó
            if(pd->quantidade == 1){
                pd->ultimo = atual -> prox;
            }
        else
        /* eh o ultimo da lista */
        if (atual == pd->ultimo){
            pd->ultimo = ant;
            ant->prox  = NULL;
        } else
             /* estah no meio da lista */
             ant->prox = atual->prox;

        pd->quantidade--;
        free(atual);
        return 1;
    }

    return 0;
}

#endif
