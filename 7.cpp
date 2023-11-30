int main() {
  int num1, num2, soma, subtracao, multiplicacao;
  float divisao;
  printf("digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("digite o segundo numero: ");
  scanf("%d", &num2);
  soma = num1 + num2;
  subtracao = num1 - num2;
  divisao = num1 / num2;
  multiplicacao = num1 * num2;
   if (num2 != 0) {
        divisao = (float)num1 / num2;
        printf("A divisão dos números %d e %d é: %.2f\n", num1, num2, divisao);
    } else {
        printf("Não é possível dividir por zero.\n");
    }
    printf("A soma dos números %d e %d é: %d\n", num1, num2, soma);
    printf("A subtração dos números %d e %d é: %d\n", num1, num2, subtracao);
    printf("A multiplicação dos números %d e %d é: %d\n", num1, num2, multiplicacao);
  return 0;
}
