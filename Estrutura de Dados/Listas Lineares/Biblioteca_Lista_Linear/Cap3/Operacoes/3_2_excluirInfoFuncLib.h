#ifndef EXCLUIR_INFO_FUNC_LIB_H
#define EXCLUIR_INFO_FUNC_LIB_H

int excluirInfoFuncLib(pDLista pd, void *info, FuncaoComparacao pfc, FuncaoLiberacao pfl){

    pNoh atual, ant;

    atual = pd->primeiro;
    ant   = NULL;

    while(atual != NULL){
       if (pfc(atual->info, info) == 0)
          break;
       ant   = atual;
       atual = atual->prox;
    }
    
    if (atual != NULL){
        if (atual == pd->primeiro)
            pd->primeiro = atual->prox;
            //alterei para a ideia de uma lista com 1 nó
            if(pd->quantidade == 1){
                pd->ultimo = atual -> prox;
            }
        else if (atual == pd->ultimo){
            pd->ultimo = ant;
            ant->prox  = NULL;
        }else
             ant->prox = atual->prox;

        pd->quantidade--;
        pfl(atual->info);
        free(atual); 
        return 1;
    }

    return 0;
}

#endif