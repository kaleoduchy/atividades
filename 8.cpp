#include <stdio.h>
  #define PI 3.14159265358979323846
int main() {
  float raio, area, diametro;
  printf("digite o raio da circunferencia: ");
  scanf("%f", &raio);
  area = PI * raio * raio;
  diametro = 2 * raio;
  printf("A área da circunferência é: %.2f\n", area);
  printf("O diâmetro da circunferência é: %.2f\n", diametro);
  return 0;
}
