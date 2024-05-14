#include <stdio.h>
#include <math.h>

int main () {
    float cateto1, cateto2, hipotenusa, area, perimetro, angulo1, angulo2;
    
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);
  
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    area = 0.5 * cateto1 * cateto2;

    perimetro = cateto1 + cateto2 + hipotenusa;
    
    angulo1 = atan(cateto2 / cateto1) * (180.0 / M_PI);
    angulo2 = 90.0 - angulo1;


    printf("Hipotenusa: %.2f unidades\n", hipotenusa);
    printf("Área: %.2f unidades quadradas\n", area);
    printf("Perímetro: %.2f unidades\n", perimetro);
    printf("Ângulo adjacente ao primeiro cateto: %.2f graus\n", angulo1);
    printf("Ângulo adjacente ao segundo cateto: %.2f graus\n", angulo2);

    return 0;
}
