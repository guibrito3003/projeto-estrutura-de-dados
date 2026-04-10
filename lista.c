#include <stdlib.h>
#include <string.h>
#include "lista.h"

void inicializarLista(Lista *l) {
    l->inicio = NULL;  // Lista começa vazia
}

void inserirInicio(Lista *l, char *texto) {
    No *novo = (No*) malloc(sizeof(No)); // Aloca memória

    strcpy(novo->texto, texto); // Copia texto

    novo->ant = NULL;           // Não tem anterior
    novo->prox = l->inicio;     // Aponta para o antigo início

    if (l->inicio != NULL) {
        l->inicio->ant = novo;  // Ajusta o anterior do antigo início
    }

    l->inicio = novo;           // Novo nó vira o início
}