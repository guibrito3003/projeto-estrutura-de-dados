#ifndef PILHA_H
#define PILHA_H

// Define o tamanho máximo da pilha (quantidade de itens que ela pode guardar)
#define MAX 100

// Definição da estrutura da Pilha
typedef struct Pilha {
    // Matriz de caracteres para armazenar até 100 strings de 255 caracteres cada
    char itens[MAX][255]; 
    // Variável que controla o índice do elemento no topo da pilha
    int topo;
} Pilha;

// Prepara a pilha para uso, definindo o topo como vazio
void inicializarPilha(Pilha *p); 

// Verifica se a pilha não contém nenhum elemento (retorna 1 se vazia, 0 se não)
int pilhaVazia(Pilha *p);

// Verifica se a pilha atingiu o limite máximo de itens
int pilhaCheia(Pilha *p);

// Insere um novo texto no topo da pilha (operação PUSH)
void empilhar(Pilha *p, char *texto);

// Remove o item do topo da pilha e o copia para a variável de destino (operação POP)
void desempilhar(Pilha *p, char *destino);

#endif