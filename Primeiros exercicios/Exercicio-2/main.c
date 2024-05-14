#include <stdio.h>
#include <math.h>

int main() {
    float areaBase, altura, volume, areaSuperficial;

    printf("Digite a área da base da pirâmide (em metros quadrados): ");
    scanf("%f", &areaBase);

    printf("Digite a altura da pirâmide (em metros): ");
    scanf("%f", &altura);

    volume = (areaBase * altura) / 3.0;

    float ladoBase = sqrt(areaBase);
    areaSuperficial = areaBase + 4 * (ladoBase * sqrt(pow(ladoBase / 2.0, 2) + pow(altura, 2)));

    printf("O volume da pirâmide é: %.2f metros cúbicos\n", volume);
    printf("A área superficial da pirâmide é: %.2f metros quadrados\n", areaSuperficial);

    return 0;
}
