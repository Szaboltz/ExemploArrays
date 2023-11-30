#include <stdio.h>

void carrinho() {
	float vet[500];
	int x = 0, itens = 1, k = 0;
	float j = 1, soma = 0;
	
	
	while (j != 0) {
		printf("Entre com o valor do item [%d/500]: ", itens);
		scanf("%f", &j);
		
		soma += j;
		vet[x] = j;
		
		itens++;
		x++;
	}
	
	printf("\nA quantidade de itens e: %d\n", itens - 2);
	
	printf("O valor dos itens: ");
	
	while (vet[k] != '\0') {
		printf("R$ %.2f ", vet[k]);
		k++;
	}
	


	printf("\nTotal: %0.2f", soma);
}

void maior() {
	int vetor[5];
	int aux = 0;
	int x = 0;
	int num = 0;
	
	while(x < 5) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num >= aux) aux = num;
		x++;
	}
	
	printf("\nO maior numero e: %d", aux);
}

void vasculhar() {
	int array[100];
	int x, i = 0, j, y = 1, z = 0;
	
	for(x = 0; x < 100; x++) {
		array[x] = -1;
	}
	
	while (y >= 0) {
		printf("Digite um número ou um numero negativo para encerrar [%d]: ", z);
		scanf("%d", &y);
		
		if (y >= 0) array[i] = y;
		i++;
		z++;
	}
	
	for (j = 0; array[j] != -1; j++) {
		printf("%d", array[j]);
	}
	
}

void multidimensional() {
	
	int matrix[20][10];
	int i, j, ct;
	
	for (i = 0; i < 20; i++){
		for (j = 0; j < 10; j++){
			matrix[i][j] = ct;
			ct++;
		}
	}
	
	for (i = 0; i < 20; i++){
		for (j = 0; j < 10; j++){
			printf("%d", matrix[i][j]);
			ct++;
		}
		printf("\n");
	}
}

void arrayString() {
	char matrix[5][100];
	int ct;
	
	for(ct = 0; ct < 5; ct++){
		printf("\nDigite uma string: ");
		gets(matrix[ct]);
	}
	
	printf("\n\nAs strings que voce digitou foram: \n");
	
	for(ct = 0; ct < 5; ct++){
		printf("%d - %s\n", ct, matrix[ct]);
	}
}


int main() {
//	carrinho();
//	maior();
//	vasculhar();
//	multidimensional();
//	arrayString();
	

	return 0;
}
