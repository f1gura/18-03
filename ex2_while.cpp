#include <stdio.h>

int main(void) {
  int media = 0;

  int nota,a = 0;

  while(media != -5) {
    nota = media + nota;

    printf("Digite uma nota (-5 para encerrar): ");
    scanf("%d", &media);
    
    a++;
  }
  
  float resultado;
  
  resultado = nota / (a-1);
  


  printf("Resultado da media: %f", resultado);
 

  return 0;
}
