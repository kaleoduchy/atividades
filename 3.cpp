int main() {
  int num1, num2, soma, subtracao, multiplicacao;
  printf("digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("digite o segundo numero: ");
  scanf("%d", &num2);
  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
    printf("A soma dos números %d e %d é: %d\n", num1, num2, soma);
    printf("A subtração dos números %d e %d é: %d\n", num1, num2, subtracao);
    printf("A multiplicação dos números %d e %d é: %d\n", num1, num2, multiplicacao);
  return 0;
}
