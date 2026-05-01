#include <stdio.h>
#include <string.h>

#define LAVAGEM_SIMPLES 60.0
#define LAVAGEM_COMPLETA 180.0
#define POLIMENTO 320.0
#define DESCONTO 0.20
int main() {

    //Declaração das variaveis
    char nome[50];
    char placa[10];
    char telefone[11]; 
    int opcao;
    double total, promocao;

    //entrada
    printf("\nCadastro Cliente\n\n");
    
    printf("Digite o nome do cliente.:\n"); //apenas ler primeiro nome, corrigir futuramente.
    scanf(" %s", nome);

    printf("Digite a placa do veiculo.:\n"); //versões futuras transforma tudo em maiusculo
    scanf(" %s", placa);

    printf("Digite o telefone.:\n"); //tentar usar formatação padrão numero telefonico
    scanf(" %s", telefone);

    printf("\nTipo de serviço\n\n");

    printf("\nOpção:\n\n");

    printf("1 = Lavagem Simples\n"); 
    printf("2 = Lavagem Completa\n"); 
    printf("3 = Polimento\n"); 
    printf("4 = PROMOCAO\n"); 

    printf("\nServiço solicitado.:\n\n");
    scanf("%d", &opcao);
    
    //processamento        
switch(opcao){

    case 1: 
        total = LAVAGEM_SIMPLES; 
        promocao = 0;
        break;

    case 2: 
        total = LAVAGEM_COMPLETA; 
        promocao = 0;
        break;

    case 3: 
        total = POLIMENTO; 
        promocao = 0;
        break;

    case 4: {
        double valor = LAVAGEM_COMPLETA + POLIMENTO;
        promocao = valor * DESCONTO;
        total = valor - promocao;
        break;
    }

    default:
        printf("Opcao invalida\n");
        return 0;
}


    //saida
printf("Valor total R$: %.2lf\n", total);
printf("Desconto aplicado R$: %.2lf\n", promocao);
    
}
