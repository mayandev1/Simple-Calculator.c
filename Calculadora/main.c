#include <stdio.h>
#include <stdlib.h>

void limpartela(){
    #ifdef _WIN32
    system("cls"); 
#else
    system("clear"); 
#endif
}


// Função para apresentar o menu com as operações matemáticas que o usuário pode escolher
int apresentarMenu() {
    int escolha;

    printf("=====================================\n");
    printf("||       CALCULADORA SIMPLES       ||\n");
    printf("=====================================\n");
    printf("|| Escolha uma operacao matematica ||\n");
    printf("=====================================\n");
    printf("|| 1. + Adicao                     ||\n");
    printf("|| 2. - Subtracao                  ||\n");
    printf("|| 3. * Multiplicacao              ||\n");
    printf("|| 4. / Divisao                    ||\n");
    printf("|| 5. Sair                         ||\n");
    printf("=====================================\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha);

    return escolha;
}

// Função com switch para realizar as operações 
void resultado(int escolha, double num1, double num2){
    double resultado;
    switch (escolha){
    case 1:
        resultado = num1 + num2;
        printf("O resultado da Adicao: %.2lf\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("O resultado da Subtracao: %.2lf\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("O resultado da Multiplicacao: %.2lf\n", resultado);
        break;
    case 4:
        if (num2 != 0){
            resultado = num1 / num2;
            printf("O resultado da Divisao: %.2lf\n", resultado);
        } else {
            printf("Divisao por zero nao e permitida.\n");
        }   
        break;        
    default:
        printf("Operacao Invalida!\n");
        break;
    }
}

int main(){
    double num1, num2;
    int escolha;

    while(1){
        limpartela();

        escolha = apresentarMenu();


        if (escolha == 5){
            printf("Saindo da calculadora...\n ");
            break;
        }
        if (escolha >= 1 && escolha <= 4){
            printf("Digite o primeiro numero:\n ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero:\n ");
            scanf("%lf", &num2);
            resultado(escolha, num1, num2);
        } else{
            printf("Escolha Invalida, tente novamente.\n ");
        }

        printf("\n Digite Enter para continuar...");
        getchar();
        getchar();
    }

    return 0;
}