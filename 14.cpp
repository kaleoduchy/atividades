#include <stdio.h>

int main() {
  int A, B, C, resultado;
  printf("Digite o valor de A: ");
    scanf("%d", &A);
     printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    resultado = (A + B + C) * (A + B + C);
    printf("A soma dos quadrados de A, B e C é: %d\n", resultado);

    return 0;
}
