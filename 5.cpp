#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao;
    float divisao;

    
    printf("digite o primeiro número: ");
    scanf("%d", &num1);

    
    printf("digite o segundo número: ");
    scanf("%d", &num2);

    
    if (num2 != 0) {
        
        divisao = (float)num1 / num2;
        printf("a divisão dos números %d e %d é: %.2f\n", num1, num2, divisao);
    } else {
        printf("não é possível dividir por zero.\n");
    }

    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    
    printf("a soma dos números %d e %d é: %d\n", num1, num2, soma);
    printf("a subtração dos números %d e %d é: %d\n", num1, num2, subtracao);
    printf("a multiplicação dos números %d e %d é: %d\n", num1, num2, multiplicacao);

    return 0;
}

