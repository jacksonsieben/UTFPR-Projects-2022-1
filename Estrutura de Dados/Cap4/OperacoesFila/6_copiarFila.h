

pDFila copiarFila (pDFila pd, FuncaoAlocacao fa){
    pDFila pdCopia;
    if(pd==NULL){
        printf("Fila Vazia!");
    }else{
        pdCopia = criarFila();

        pdCopia->pdLista = duplicarLista(pd->pdLista, fa);

        
    }
    return pdCopia;
}

