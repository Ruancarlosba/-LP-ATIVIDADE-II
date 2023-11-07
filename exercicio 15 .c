#include <stdio.h>

int main() {
    int opcao;
    double valor, resultado;

    while (1) {
        printf("Escolha a conversao desejada:\n");
        printf("1. Quilometros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Programa encerrado. Obrigado!\n");
            break;  
        }

        switch (opcao) {
            case 1:
                printf("Digite a quantidade em quilometros: ");
                scanf("%lf", &valor);
                resultado = valor * 0.621371; 
                printf("%.2lf quilometros equivalem a %.2lf milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%lf", &valor);
                resultado = (valor * 9 / 5) + 32; 
                printf("%.2lf graus Celsius equivalem a %.2lf graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}