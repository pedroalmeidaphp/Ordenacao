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
	for (i = 0; i < 200; i++){     //preenche todos os espaços do vetor com 0
		x[i] = 0;
	}
	
   	while (1)//while true 
   	{
   		printf("Digite um numero de 0 a 5000.OBS: para exibi-lo na tela digite -1 ");
		scanf("%d", &w);

		if (w == -1)break; //faz com que o programa pare quando digitado -1 pelo usuario

		if (w >= 0 && w<=5000)
		{
			j = w % 32;
			k = w / 32; // pega a divisão e o resto do numero digitado por 32(numero de bits)

			x[k] = (1 << j) | x[k]; // coloca na posição k do vetor a comparação bit a bit entre 1 com e jota bits deslocados a esqueda e essa mesma posição( no caso um ou bit a bit) 
		}
		
		else printf("Valor invalido \n");
		}
	printf("Os numeros sao: ");
	for (i = 0; i < 200; i++){
		for (z = 0; z < 32; z++){ //printa os numeros do vetor de forma ordenada, usando comparação de bits
        	if ((x[i] >> z) & 1) printf("%d ", z + i * 32);
    }
	}
	
   	//#########################
	return 0;  
}
