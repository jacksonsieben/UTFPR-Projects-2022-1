#ifndef ARVORE_TAD_H
#define ARVORE_TAD_H
/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
/* estrutura do noh da arvore */
typedef struct nohArvore  NohArvore;
typedef NohArvore*        pNohArvore;

/* descritor da arvore */
typedef struct dArvore  DArvore;
typedef DArvore*        pDArvore;

/* tipos referentes aos ponteiros para funcao */
typedef int  (*FuncaoComparacao)(void*, void*);
typedef void (*FuncaoImpressao) (void*);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDArvore   criarArvore(int);

void        incluirInfoArv         (pDArvore, void *, FuncaoComparacao);
int         excluirInfoArv         (pDArvore, void *, FuncaoComparacao);
pNohArvore  buscarInfo          (pDArvore, void *, FuncaoComparacao);
int         quantidadeNohs      (pDArvore);

/* percursos */
void        emOrdem             (pNohArvore, FuncaoImpressao);
void        preOrdem            (pNohArvore, FuncaoImpressao);
void        posOrdem            (pNohArvore, FuncaoImpressao);

int         grau                (pDArvore);
int         nivel               (pDArvore, void *, FuncaoComparacao);
int         ehFolha             (pDArvore, void *, FuncaoComparacao);
int         arvoreVazia         (pDArvore);

/*exercicios*/ 

int         quantidadeFolhas    (pNohArvore);
int         qtdeNohs            (pDArvore);
int         altura              (pDArvore);
int         iguais              (pDArvore, pDArvore, FuncaoComparacao);
int         estritamenteBinaria (pDArvore);
pDArvore    espelho             (pDArvore);
void        amplitude           (pDArvore, FuncaoImpressao);
int         comprimentoInterno  (pDArvore);
int         balanceada          (pDArvore);
int         isBST               (pDArvore, void*, void*, FuncaoComparacao);
int         avalia              (pDArvore);

#endif

