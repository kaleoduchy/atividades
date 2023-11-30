#include <stdio.h>

int main() {
  float temperaturaCelsius, temperaturaFahrenheit;
  printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);
    temperaturaFahrenheit = (temperaturaCelsius * 9/5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", temperaturaFahrenheit);
      return 0;

}
