pDPilha copiarPilha (pDPilha pd){
    pDPilha pDCopia = criarPilha();
    pDPilha pDAux = criarPilha();

    int count = 0;
    void *info;

    while(pilhaVazia(pd) == 0){
        empilharInfo(pDAux, desempilharInfo(pd));
        count++;
    }
    count = 0;
    while(pilhaVazia(pDAux) == 0){
        info = desempilharInfo(pDAux);
        empilharInfo(pd, info);
        empilharInfo(pDCopia, info);
        count++;
    }
    return pDCopia;
}