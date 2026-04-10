#include <stdio.h>          // Biblioteca padrão de entrada e saída
#include <string.h>         // Necessária para usar strcpy
#include "pilha.h"          // Inclui o cabeçalho da pilha

void inicializarPilha(Pilha *p) {
    p->topo = -1;          // Define a pilha como vazia
}

int pilhaVazia(Pilha *p) {
    return p->topo == -1;  // Retorna 1 se topo for -1 (vazia)
}

int pilhaCheia(Pilha *p) {
    return p->topo == MAX - 1; // Retorna 1 se atingir o limite
}

void empilhar(Pilha *p, char *texto) {
    if (pilhaCheia(p)) {   // Verifica se está cheia
        printf("Pilha cheia\n");
        return;
    }

    p->topo++;                         // Sobe o topo
    strcpy(p->itens[p->topo], texto);  // Copia o texto para a pilha
}

void desempilhar(Pilha *p, char *destino) {
    if (pilhaVazia(p)) {  // Verifica se está vazia
        printf("Pilha vazia\n");
        return;
    }

    strcpy(destino, p->itens[p->topo]); // Copia o topo para destino
    p->topo--;                          // Desce o topo
}