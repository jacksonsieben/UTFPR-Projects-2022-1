void amplitude (pDArvore arvore, FuncaoImpressao pfi){
    pDLista lista = criarLista();

    pNoh pAux = malloc(sizeof(Noh));

    pNohArvore raiz = malloc(sizeof(pNohArvore));

    raiz = arvore->raiz;
    incluirInfo(lista, raiz);
    while(lista->quantidade != 0){
        pAux = lista->primeiro;
        int quantidade = lista->quantidade;
        while(pAux != NULL){
            raiz = pAux->info;
            if(raiz != NULL){
                if(raiz->esquerda != NULL){
                    incluirInfo(lista, raiz->esquerda);
                }
                if(raiz->direita != NULL){
                    incluirInfo(lista, raiz->direita);
                }
            }
            pAux = pAux->prox;
            pfi(raiz->info);
            excluirInfoPos(lista, quantidade);
            quantidade--;
        }
        printf("\n");
    }
} 