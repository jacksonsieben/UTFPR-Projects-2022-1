#ifndef INCLUIR_INFO_MEIO_H
#define INCLUIR_INFO_MEIO_H

void incluirInfoMeio(pDLista pd, void *info, int local){
    if (pd == NULL){
        printf("Lista nao existe ainda, nao eh possivel incluir!");
        return;
    }

    if(local==1){
        incluirInfoInicio(pd, info);
    }else if(local == pd->quantidade){
        incluirInfo(pd, info);
    }else{
        pNoh atual, ant;

        int cont = 1;

        atual = pd->primeiro;
        ant = NULL;

        while(atual != NULL){
            if(cont == local){
                break;
            }
            ant = atual;
            atual = atual->prox;
            cont++;
        }

        if(atual != NULL){
            pNoh pNovo = malloc(sizeof(Noh));

            pNovo->info = info;
            
            pNovo->prox = atual;
            ant->prox = pNovo;
            
            pd->quantidade++;
        }
    }

}

#endif