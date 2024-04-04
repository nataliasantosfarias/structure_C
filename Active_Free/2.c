
//entrada e saída de dados com limitações de casas decimais 
//******************************************************************************


#include <stdio.h>

int main()
{
    int idade;              // variável inteira
    float peso;
    float altura;      // variável ponto flutuante/real
    
    printf("Digite a idade: "); // entrada de dados
    scanf("%d", &idade);       // saída de dados
    
    printf("Digite o peso: ");
    scanf("%f", &peso);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("Sua idade é: %d\n  Você tem: %.2f\n E o seu peso é: %.3f\n", idade, peso, altura );
    getchar();  // Aguarda que o usuário pressione Enter antes de sair usado no sistema UNIX
    return 0;
}

