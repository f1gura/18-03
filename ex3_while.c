#include <stdio.h>

int main() {
	
	int a, b, c, cm, c1, c2;

    printf("Digite o 1 numero: ");
	scanf("%d", &a);
    
	while(a != -1)
	{
    printf("Digite o 2 numero: ");
    scanf("%d", &b);
    
    printf("Digite o 3 numero: ");
    scanf("%d", &c);


        if(a > b){
            if(a > c){
                
                cm = a;
                c1     = b;
                c2     = c;
                
            }
        }else if(b > c){
            if(b > a){
                cm = b;
                c1 = a;
                c2 = c;
            }
        } else {
                cm = c;
                c1     = a;
                c2     = b;
        }


        if((c1 * c1) + (c2 * c2) == (cm * cm) )
            puts("Forma um triangulo retangulo.\n");
        else
            puts("Não forma um triangulo retangulo.\n");
        
	
	printf("Digite o 1 numero: (-1 para encerrar)");
	scanf("%d", &a);
    } /* fim do while */
    
  return 0;
}
