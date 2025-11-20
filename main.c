#include <stdio.h>

int main(){
	
	int codigos[] = {101, 102, 103, 104, 105};
	char nomes[][20] = {"Arroz", "Feijao", "Macarrao", "Farinha", "Acucar"};
	float precos[] = {5.5, 7.2, 4.0, 3.8, 2.5};
	
	printf("|--------------------------------------------------|\n");
	printf("| Codigos: 101, 102, 103, 104, 105                 |\n");
	printf("| Nomes: Arroz, Feijao, Macarrao, Farinha, Acucar  |\n");
	printf("| Precos: 5.5, 7.2, 4.0, 3.8, 2.5                  |\n");
	printf("|--------------------------------------------------|\n");
	printf("| Escolha uma opcao abaixo:                        |\n");
	printf("| 1 - Consultar um produto                         |\n");
	printf("| 2 - Adicionar um produto ao carrinho             |\n");
	printf("|--------------------------------------------------|\n");

}