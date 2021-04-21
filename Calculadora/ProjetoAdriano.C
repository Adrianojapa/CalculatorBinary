#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 50

int main()
{
	// exemplo de um número em decimal
	int num = 0;
    int opcao;
    printf("Escolha Decimal X Binario (1) ou Binario X Decimal (2)");
    scanf("%d", &opcao);
    if(opcao == 1)
    {
      printf("Digite um numero decimal: ");
    scanf("%d", &num);
	// vetor de MAX posições para guardar o número em binário
	int vet_bin[MAX];
	// variáveis de controle de loop
	int i = 0, j;
	// aux_num serve para guardar num para mostrar posteriormente
	int aux_num = num;

	// enquanto "num" for maior que 0
	while(num > 0)
	{
		// obtém o resto da divisão de num por 2
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("%d em binario =  ", aux_num);

	// percorre o vetor para mostrar o número em binário
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");

	return 0;  

    }

    else
    {
        //Exemplo de Binário
        int bin2, dec = 0, i;
    printf("\n Digite um numero binario: \t");
    scanf("%d", &bin2);
    //Calculo de binário para decimal
    for(i = 0; bin2 > 0; i++)
    {
        dec = dec + pow(2, i) * (bin2 % 10);
        bin2 = bin2 / 10;
    }
    printf("\n Convertido em  decimal = \t %d\n", dec);
    return 0;


    }
    
}