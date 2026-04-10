#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "fila.h"
#include "lista.h"

int main() {
    Pilha p;
    Fila f;
    Lista l;

    char texto[255];
    int opcao;

    inicializarPilha(&p);
    inicializarFila(&f);
    inicializarLista(&l);

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Empilhar (Pilha)\n");
        printf("2 - Desempilhar (Pilha)\n");
        printf("3 - Enfileirar (Fila)\n");
        printf("4 - Desenfileirar (Fila)\n");
        printf("5 - Inserir na Lista\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // limpa o ENTER do buffer

        switch(opcao) {
            case 1:
                printf("Digite um texto: ");
                fgets(texto, 255, stdin);
                texto[strcspn(texto, "\n")] = '\0'; // remove \n
                empilhar(&p, texto);
                printf("Empilhado com sucesso!\n");
                break;

            case 2:
                if (pilhaVazia(&p)) {
                    printf("Pilha vazia!\n");
                } else {
                    desempilhar(&p, texto);
                    printf("Removido da pilha: %s\n", texto);
                }
                break;

            case 3:
                printf("Digite um texto: ");
                fgets(texto, 255, stdin);
                texto[strcspn(texto, "\n")] = '\0';
                enfileirar(&f, texto);
                printf("Enfileirado com sucesso!\n");
                break;

            case 4:
                if (filaVazia(&f)) {
                    printf("Fila vazia!\n");
                } else {
                    desenfileirar(&f, texto);
                    printf("Removido da fila: %s\n", texto);
                }
                break;

            case 5:
                printf("Digite um texto: ");
                fgets(texto, 255, stdin);
                texto[strcspn(texto, "\n")] = '\0';
                inserirInicio(&l, texto);
                printf("Inserido na lista!\n");
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}