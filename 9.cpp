#include <stdio.h>
#include <math.h>
  #define PI 3.14159265358979323846
int main() {
  float raio, volume;
  printf("digite o raio da esfera: ");
  scanf("%f", &raio);
  volume = (4.0 / 3.0) * PI * raio * raio * raio;
  printf("O volume da esfera é: %.2f\n", volume);
  return 0;
}
