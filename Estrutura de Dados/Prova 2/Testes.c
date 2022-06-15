#include "Prova2.h"
#include <stddef.h>
#include <conio.h>

int main(){
    int vertices[] = {1,2,3,4,5};

    pDGrafo grafo = criarGrafoPlus(comparaVertice, imprimeVertice, alocaInfoVertice);

    incluirVertice(grafo, &vertices[0], NULL);
    incluirVertice(grafo, &vertices[1], NULL);
    incluirVertice(grafo, &vertices[2], NULL);
    incluirVertice(grafo, &vertices[3], NULL);
    incluirVertice(grafo, &vertices[4], NULL);
    incluirAresta(grafo, &vertices[0], &vertices[1], NULL);
    incluirAresta(grafo, &vertices[1], &vertices[3], NULL);
    incluirAresta(grafo, &vertices[2], &vertices[3], NULL);
    incluirAresta(grafo, &vertices[2], &vertices[4], NULL);
    incluirAresta(grafo, &vertices[3], &vertices[4], NULL);
    incluirAresta(grafo, &vertices[4], &vertices[1], NULL);

    mostrarGrafo(grafo, NULL);
    getch();

    int vertice = 4;
    int vDestino = 2;

    excluirVertice(grafo, &vertice, comparaInt);

    mostrarGrafo(grafo, NULL);
    getch();
}