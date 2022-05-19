pNohArvore espelhoRecursivo(pNohArvore raiz1, pNohArvore raiz2){
    if(raiz1 == NULL){
        return;
    }
}

pDArvore espelho (pDArvore arvore){    
    pDArvore novaArvore = criarArvore(2);

    espelhoRecursivo(arvore->raiz, novaArvore->raiz);

    return novaArvore;    
}