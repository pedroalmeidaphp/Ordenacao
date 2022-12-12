#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
	for (i = 0; i < 200; i++){
		x[i] = 0;
	}
	
   	while (1)
   	{
   		printf("Digite um numero de 0 a 5000.OBS: para exibi-lo na tela digite -1 ");
		scanf("%d", &w);

		if (w == -1)break;

		if (w >= 0 && w<=5000)
		{
			j = w % 32;
			k = w / 32;

			x[k] = (1 << j) | x[k]; 
		}
		
		else printf("Valor invalido \n");
		}
	printf("Os numeros sao: ");
	for (i = 0; i < 200; i++){
		for (z = 0; z < 32; z++){
        	if ((x[i] >> z) & 1) printf("%d ", z + i * 32);
    }
	}
	
   	//#########################
	return 0;  
}
