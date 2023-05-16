#include <stdio.h>
#include <stdlib.h

// 04 - Crie um sistema de caixa eletrônico, utilizando menus (switch) e outros recursos, que
// realizem operações financeiras (depósito e saque) a partir de funções especificamente
// projetadas para tal. Lembre-se de que o caixa eletrônico é um programa que roda como
// repetição contínua, até que o usuário decida encerrar as operações. Ao encerrar as
// operações, o sistema deverá apresentar o saldo final que o usuário tem em conta.

float saldo = 0; // vari�vel global para armazenar o saldo da conta

void exibir_menu() {
    printf("\n\nSelecione uma opcao:\n");
    printf("1 - Ver saldo\n");
    printf("2 - Fazer deposito\n");
    printf("3 - Fazer saque\n");
    printf("4 - Sair\n");
}

void ver_saldo() {
    printf("\nSeu saldo atual eh: R$ %.2f\n", saldo);
}

void fazer_deposito() {
    float valor;

    printf("\nDigite o valor do deposito: R$ ");
    scanf("%f", &valor);

    saldo += valor;
    printf("\nDeposito de R$ %.2f efetuado com sucesso!\n", valor);
}

void fazer_saque() {
    float valor;

    printf("\nDigite o valor do saque: R$ ");
    scanf("%f", &valor);

    if (valor > saldo) {
        printf("\nSaldo insuficiente para realizar o saque!\n");
    } else {
        saldo -= valor;
        printf("\nSaque de R$ %.2f efetuado com sucesso!\n", valor);
    }
}

int main() {
    int opcao;

    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ver_saldo();
                break;
            case 2:
                fazer_deposito();
                break;
            case 3:
                fazer_saque();
                break;
            case 4:
                printf("\nSaldo final: R$ %.2f\n", saldo);
                printf("Obrigado por usar nosso caixa eletronico!\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}