#ifndef DESTRUIR_LISTA_FUNC_LIB_H
#define DESTRUIR_LISTA_FUNC_LIB_H

void destruirListaRecursivaFL(pNoh atual, FuncaoLiberacao pflr){
    if (atual == NULL)
        return;
    destruirListaRecursivaFL(atual->prox, pflr);
    //free(atual);
    //fcr(atual);
    pflr(atual->info);
}

void destruirListaFL(pDLista pd, FuncaoLiberacao pfl){
   destruirListaRecursivaFL(pd->primeiro, pfl);
   pd->primeiro   = NULL;
   pd->ultimo     = NULL;
   pd->quantidade = 0;
}

#endif



