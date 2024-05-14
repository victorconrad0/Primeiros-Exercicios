#include <stdio.h>
int main()
{
  char nome [100];
  printf("Digite seu nome completo: \n");
  fgets(nome, sizeof(nome), stdin);

  int num_caracterers = strlen(nome);
  printf("O seu nome tem %d de caracteres. \n" , num_caracterers);
  
return 0;
}
