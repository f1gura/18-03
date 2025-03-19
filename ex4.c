#include <stdio.h>

int main() {
	
	float ra,area,cir,di,pi = 3.14;

	printf("Digite o raio: ");
	scanf("%f", &ra);
	
	
	area = (ra * ra) * pi;
	printf("a area e: %f\n",area);
	
	cir = (2 * pi) * ra;
	printf("a circunferencia e: %f\n",cir);
	
	di = 2 * ra;
	printf("o diametro e: %f\n",di);
	
 
    
  return 0;
}
