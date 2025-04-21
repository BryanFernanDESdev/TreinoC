#include <stdio.h>

int main() {
    int opcao;
    int numero;

    do {
        // Clear menu display
        printf("\n=== MENU ===\n");
        printf("1 - Dizer ola\n");
        printf("2 - Calcular o dobro de um numero\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        
        // Input validation
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n'); // Clear input buffer
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        // Single switch statement instead of nested ones
        switch (opcao) {
            case 1:
                printf("Ola!\n");
                break;
                
            case 2:
                printf("Digite um numero: ");
                if (scanf("%d", &numero) == 1) {
                    printf("O dobro de %d eh %d\n", numero, numero * 2);
                } else {
                    printf("Entrada invalida!\n");
                    while (getchar() != '\n'); // Clear input buffer
                }
                break;
                
            case 3:
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
