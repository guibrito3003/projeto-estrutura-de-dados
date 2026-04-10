#ifndef FILA_H
#define FILA_H

#define TAM 100                  // Tamanho máximo da fila

typedef struct {
    char dados[TAM][255];        // Armazena textos
    int inicio;                  // Início da fila
    int fim;                     // Fim da fila
    int tamanho;                 // Quantidade de elementos
} Fila;

void inicializarFila(Fila *f);
int filaVazia(Fila *f);
int filaCheia(Fila *f);
void enfileirar(Fila *f, char *texto);
void desenfileirar(Fila *f, char *destino);

#endif