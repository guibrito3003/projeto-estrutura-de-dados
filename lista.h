#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    char texto[255];       // Armazena texto
    struct No *ant;        // Ponteiro anterior
    struct No *prox;       // Ponteiro próximo
} No;

typedef struct {
    No *inicio;            // Início da lista
} Lista;

void inicializarLista(Lista *l);
void inserirInicio(Lista *l, char *texto);

#endif