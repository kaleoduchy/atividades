#include <stdio.h>

int main() {
  float quilometrosRodados, litrosCombustivel, consumo;
   printf("Digite os quilômetros rodados: ");
    scanf("%f", &quilometrosRodados);
    printf("Digite a quantidade de litros de combustível: ");
    scanf("%f", &litrosCombustivel);
    consumo = quilometrosRodados / litrosCombustivel;
    printf("O consumo do carro é de %.2f quilômetros por litro\n", consumo);
    return 0;
}
