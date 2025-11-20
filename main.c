#include <stdio.h>

int main(){
	
	int codigos[] = {101, 102, 103, 104, 105};
	char nomes[][20] = {"Arroz", "Feijao", "Macarrao", "Farinha", "Acucar"};
	float precos[] = {5.5, 7.2, 4.0, 3.8, 2.5};
	int carrinho[10][3];
	
	int entrada;
	int n_consulta;
	int linha_carrinho;
	
	do {
		
		printf("|--------------------------------------------------|\n");
		printf("| Codigos: 101, 102, 103, 104, 105                 |\n");
		printf("| Nomes: Arroz, Feijao, Macarrao, Farinha, Acucar  |\n");
		printf("| Precos: 5.5, 7.2, 4.0, 3.8, 2.5                  |\n");
		printf("|--------------------------------------------------|\n");
		printf("| Escolha uma opcao abaixo:                        |\n");
		printf("| 1 - Consultar um produto                         |\n");
		printf("| 2 - Adicionar um produto ao carrinho             |\n");
		printf("| 3 - Sair                                         |\n");
		printf("|--------------------------------------------------|\n");
			
		scanf("%d", &entrada);
		switch(entrada){
		case 1:
			printf("Insira o codigo do produto que deseja consultar:\n");
			scanf("%d", &n_consulta);
			switch(n_consulta){
				case 101:
					printf("Produto: Arroz \n");
					printf("Preco: R$ 5.50 \n");
					break;
				case 102:
					printf("Produto: Feijao \n");
					printf("Preco: R$ 7.20 \n");
					break;
				case 103:
					printf("Produto: Macarrao \n");
					printf("Preco: R$ 4.00 \n");
					break;
				case 104:
					printf("Produto: Farinha \n");
					printf("Preco: R$ 3.80 \n");
					break;
				case 105:
					printf("Produto: Acucar \n");
					printf("Preco: R$ 2.50 \n");
					break;
				default:
					printf("Codigo errado. \n");
					break;
			}
			
		case 2: 
		break;
		
		case 3:
			printf("Saindo do Sistema e Imprimindo a Nota Fiscal:\n");
			break;
		default:
			printf("Opcao errada! \n");
			break;
		}
	} while(entrada != 3);
	
	
}