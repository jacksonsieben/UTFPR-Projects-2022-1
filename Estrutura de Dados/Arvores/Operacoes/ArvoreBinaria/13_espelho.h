pNohArvore espelhoRecursivo(pNohArvore raiz){
    if(raiz != NULL){
        pNohArvore novo = malloc(sizeof(pNohArvore));

        novo->info = raiz->info;        
        novo->direita = espelhoRecursivo(raiz->esquerda);
        novo->esquerda = espelhoRecursivo(raiz->direita);

        return novo;
    }
    return raiz;
    
}

pDArvore espelho (pDArvore arvore){    
    pDArvore novaArvore = criarArvore(2);

    novaArvore->raiz = espelhoRecursivo(arvore->raiz);

    return novaArvore;    
}