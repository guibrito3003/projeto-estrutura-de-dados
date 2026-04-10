#ifndef PILHA_H
#define PILHA_H

#define MAX 100

typedef struct Pilha {
    char itens[MAX][255];
    int topo;
} Pilha;

void inicializarPilha(Pilha *p); 
int pilhaVazia(Pilha *p);
int pilhaCheia(Pilha *p);
void empilhar(Pilha *p, char *texto);
void desempilhar(Pilha *p, char *destino);

#endif