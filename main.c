#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "fila.h"
#include "lista.h"

int main() {
    // Declaração das instâncias das estruturas de dados
    Pilha p;
    Fila f;
    Lista l;

    char texto[255]; // Buffer para armazenar as strings digitadas
    int opcao;       // Variável para armazenar a escolha do menu

    // Inicialização obrigatória de cada estrutura para evitar lixo de memória
    inicializarPilha(&p);
    inicializarFila(&f);
    inicializarLista(&l);

    do {
        // Exibição do Menu de Opções
        printf("\n===== MENU =====\n");
        printf("1 - Empilhar (Pilha)\n");
        printf("2 - Desempilhar (Pilha)\n");
        printf("3 - Enfileirar (Fila)\n");
        printf("4 - Desenfileirar (Fila)\n");
        printf("5 - Inserir na Lista\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        
        scanf("%d", &opcao);
        getchar(); // Limpa o caractere 'ENTER' que fica sobrando no buffer do teclado

        switch(opcao) {
            case 1: // Operação de Inserção na Pilha (LIFO)
                printf("Digite um texto: ");
                fgets(texto, 255, stdin);
                texto[strcspn(texto, "\n")] = '\0'; // Remove a quebra de linha do final da string
                empilhar(&p, texto);
                printf("Empilhado com sucesso!\n");
                break;

            case 2: // Operação de Remoção na Pilha
                if (pilhaVazia(&p)) {
                    printf("Pilha vazia!\n");
                } else {
                    desempilhar(&p, texto);
                    printf("Removido da pilha: %s\n", texto);
                }
                break;

            case 3: // Operação de Inserção na Fila (FIFO)
                printf("Digite um texto: ");
                fgets(texto, 255, stdin);
                texto[strcspn(texto, "\n")] = '\0';
                enfileirar(&f, texto);
                printf("Enfileirado com sucesso!\n");
                break;

            case 4: // Operação de Remoção na Fila
                if (filaVazia(&f)) {
                    printf("Fila vazia!\n");
                } else {
                    desenfileirar(&f, texto);
                    printf("Removido da fila: %s\n", texto);
                }
                break;

            case 5: // Operação de Inserção na Lista (Encadeada)
                printf("Digite um texto: ");
                fgets(texto, 255, stdin);
                texto[strcspn(texto, "\n")] = '\0';
                inserirInicio(&l, texto); // Insere o novo elemento sempre no começo da lista
                printf("Inserido na lista!\n");
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0); // O programa roda até que o usuário digite 0

    return 0;
}