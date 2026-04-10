#include <stdio.h>
#include <string.h>
#include "fila.h"

void inicializarFila(Fila *f) {
    f->inicio = 0;   // Começo da fila
    f->fim = 0;      // Fim da fila
    f->tamanho = 0;  // Sem elementos
}

int filaVazia(Fila *f) {
    return f->tamanho == 0; // Vazia se tamanho for 0
}

int filaCheia(Fila *f) {
    return f->tamanho == TAM; // Cheia se atingir limite
}

void enfileirar(Fila *f, char *texto) {
    if (filaCheia(f)) {
        printf("Fila cheia\n");
        return;
    }

    strcpy(f->dados[f->fim], texto);   // Insere no fim
    f->fim = (f->fim + 1) % TAM;       // Avança circularmente
    f->tamanho++;                      // Incrementa tamanho
}

void desenfileirar(Fila *f, char *destino) {
    if (filaVazia(f)) {
        printf("Fila vazia\n");
        return;
    }

    strcpy(destino, f->dados[f->inicio]); // Pega do início
    f->inicio = (f->inicio + 1) % TAM;    // Avança circular
    f->tamanho--;                         // Decrementa tamanho
}