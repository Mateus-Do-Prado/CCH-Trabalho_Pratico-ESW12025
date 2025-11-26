#include <stdio.h>

int main(){
	int codigos[] = {101, 102, 103, 104, 105};
	char nomes[][20] = {"Arroz", "Feijao", "Macarrao", "Farinha", "Acucar"};
	float precos[] = {5.5, 7.2, 4.0, 3.8, 2.5};
	double carrinho[10][3];
	
	int entrada;
	int leitura_entrada;
	int n_adiciona;
	int linha_carrinho = 0;
	int qtd_produto;
	int i;
	double subtotal;
	double total_geral = 0.0;
	
	do {
		
		printf("|--------------------------------------------------|\n");
		printf("| Codigos: 101, 102, 103, 104, 105                 |\n");
		printf("| Nomes: Arroz, Feijao, Macarrao, Farinha, Acucar  |\n");
		printf("| Precos:  R$ 5.5, 7.2, 4.0, 3.8, 2.5              |\n");
		printf("|--------------------------------------------------|\n");
		printf("| Escolha uma opcao abaixo:                        |\n");
		printf("| 1 - Adicionar um produto ao carrinho             |\n");
		printf("| 2 - Sair                                         |\n");
		printf("|--------------------------------------------------|\n");
			
		leitura_entrada = scanf("%d", &entrada);
		//Verificando a leitura de outros caracteres
		if ( leitura_entrada != 1) { //Limpeza de mémoria usada 
					while (getchar() != '\n');
					entrada = 0;
					printf("Entrada ou Opcao invalida. INSIRA OS VALORES DA TABELA PRE-FIXADA!!! \n");
					continue;
		}
		switch(entrada){
		
		case 1: 
			if(linha_carrinho>=10){
			printf("O carrinho esta cheio! Maximo de 10 itens atingido.\n");	
			break;
			}
			
			printf("Digite o codigo do produto para adicionar:\n");
			leitura_entrada = scanf("%d", &n_adiciona);
			
			if (leitura_entrada != 1) { //Limpeza de mémoria usada 
					while (getchar() != '\n');
					printf("Codigo Invalido.\n");
					break;
			}
		
			switch(n_adiciona){
				case 101:
					printf("Digite o quantidade desejada:\n");
					leitura_entrada = scanf("%d", &qtd_produto);
					
					if (leitura_entrada != 1) { 
					while (getchar() != '\n');
					printf("Quantidade Invalida.\n");
					break;
					}
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 5.50 * (double)qtd_produto;
					
					carrinho[linha_carrinho][0] = (double)n_adiciona;        
					carrinho[linha_carrinho][1] = (double)qtd_produto;        
					carrinho[linha_carrinho][2] = subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 102:
					
					printf("Digite o quantidade desejada:\n");
					leitura_entrada = scanf("%d", &qtd_produto);
					
					if (leitura_entrada != 1) { 
					while (getchar() != '\n');
					printf("Quantidade Invalida.\n");
					break;
					}
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 7.20 * (double)qtd_produto;
					
					carrinho[linha_carrinho][0] = (double)n_adiciona;        
					carrinho[linha_carrinho][1] = (double)qtd_produto;    
					carrinho[linha_carrinho][2] = subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 103:
					
					printf("Digite o quantidade desejada:\n");
					leitura_entrada = scanf("%d", &qtd_produto);
					
					if (leitura_entrada != 1) { 
					while (getchar() != '\n');
					printf("Quantidade Invalida.\n");
					break;
					}
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 4.00 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = (double)n_adiciona;        
					carrinho[linha_carrinho][1] = (double)qtd_produto;          
					carrinho[linha_carrinho][2] = subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 104:
					
					printf("Digite o quantidade desejada:\n");
					leitura_entrada = scanf("%d", &qtd_produto);
					
					if (leitura_entrada != 1) { 
					while (getchar() != '\n');
					printf("Quantidade Invalida.\n");
					break;
					}
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 3.80 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = (double)n_adiciona;        
					carrinho[linha_carrinho][1] = (double)qtd_produto;           
					carrinho[linha_carrinho][2] = subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 105:
				
					printf("Digite o quantidade desejada:\n");
					leitura_entrada = scanf("%d", &qtd_produto);
					
					if (leitura_entrada != 1) { 
					while (getchar() != '\n');
					printf("Quantidade Invalida.\n");
					break;
					}
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					subtotal = 2.50 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = (double)n_adiciona;        
					carrinho[linha_carrinho][1] = (double)qtd_produto;         
					carrinho[linha_carrinho][2] = subtotal;
							
					linha_carrinho++;
					break;
					
				default:
					printf("Codigo nao Encontrado. \n");
					break;
					}
			break;
				
		case 2:
			printf("Saindo do Sistema e Imprimindo a Nota Fiscal:\n");
			break;
		default:
			printf("Opcao errada! \n");
			break;
		} 

	total_geral += subtotal;
		
	}while(entrada != 2);
	
	if (entrada == 2 || linha_carrinho ==10) {
		printf("\n|=============== NOTA FISCAL =========================|\n"); 
	for (i = 0;i<linha_carrinho; i++){
		printf("| %s | Cod.: %d | %d UNID| R$ %.2lf -->Subtotal: R$ %.2lf |\n",  nomes[i], (int)carrinho[i][0], (int)carrinho[i][1], carrinho[i][2]/carrinho[i][1], carrinho[i][2]);
		}	
		printf("\nTOTAL A PAGAR: R$ %.2lf\n", total_geral);
	}
	
}