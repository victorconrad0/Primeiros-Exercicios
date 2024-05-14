#include <stdio.h>

int main(void) {
  int corx, cory, corz;

  printf("Digite as cores em hexadecimal: \n");
  scanf("%2x%2x%2x", &corx, &cory, &corz);

  if (corx < 0 || corx > 255 || cory < 0 || cory > 255 || corz < 0 || corz > 255){
    
  }
  printf("Cor Vermelho; %d\n", corx);
  printf("Cor Verde; %d\n", cory);
  printf("Cor Azul; %d\n", corz);
  
  return 0;
}