void trocaFila (pDFila pd, int a, int b){
    if(pd==NULL) {
        printf("Fila Vazia!");
    }else if (a==b){
        printf("Operacao Invalida - posicoes iguais!");
    }else if(a>pd->pdLista->quantidade || b>pd->pdLista->quantidade){
        printf("Operacao Invalida - posicoes maiores que a Fila!");
    }else{
        int primeiro, segundo;
        int count = 1;

        pNoh atual = pd->pdLista->primeiro;

        pNoh pPrimeiro = malloc(sizeof(pNoh));

        void *info = malloc(sizeof(void));

        if(a>b){
            segundo = a;
            primeiro = b;
        }else{
            segundo = b;
            primeiro = a;
        }
        while(count<segundo){
            if(count==primeiro){
                pPrimeiro = atual;
            }
            atual = atual->prox;
            count++;
        }
        
        info = pPrimeiro->info;
        pPrimeiro->info = atual->info;
        atual->info = info;
    }
}