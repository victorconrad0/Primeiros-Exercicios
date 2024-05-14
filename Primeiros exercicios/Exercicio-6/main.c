#include <stdio.h>

int main() {
    int corx, cory, corz;

    printf("Digite o valor da corx: ");
    scanf("%d", &corx);

    printf("Digite o valor da cory: ");
    scanf("%d", &cory);

    printf("Digite o valor da  corz: ");
    scanf("%d", &corz);

        printf("Valores fora do intervalo permitido .\n");   

    printf("A cor RGB digitada em formato hexadecimal é: #%2X%2X%2X\n", corx, cory, corz);

    return 0;
}
