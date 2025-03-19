

int main() {
	
	
  int contador =1, fim =3;
  float total = 0, nota;
  
  
  while(contador <= fim){
  	
 printf ("escreva sua nota: ");
  scanf("%f",&nota);
  
  total = total + nota;
  
  contador++;
  
  }
  
  
 	float media = total / fim;
 	printf("sua media e: %f",media);
  
  

  return 0;
}

