#include <stdio.h>

int main(){
	int codigos[] = {101, 102, 103, 104, 105};
	char nomes[][20] = {"Arroz", "Feijao", "Macarrao", "Farinha", "Acucar"};
	float precos[] = {5.5, 7.2, 4.0, 3.8, 2.5};
	int carrinho[10][3];
	
	int entrada;
	int n_consulta;
	int n_adiciona;
	int linha_carrinho = 0;
	int cod_produto;
	int qtd_produto;
	int i;
	double subtotal;
	
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
		
			printf("Digite o codigo do produto para adicionar:\n");
			scanf("%d", &n_adiciona);
			switch(n_adiciona){
				case 101:
					printf("Digite o quantidade desejada:\n");
					scanf("%d", &qtd_produto);
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 5.50 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = n_adiciona;        
					carrinho[linha_carrinho][1] = qtd_produto;        
					carrinho[linha_carrinho][2] = (int)subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 102:
					
					printf("Digite o quantidade desejada:\n");
					scanf("%d", &qtd_produto);
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 7.20 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = n_adiciona;        
					carrinho[linha_carrinho][1] = qtd_produto;        
					carrinho[linha_carrinho][2] = (int)subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 103:
					
					printf("Digite o quantidade desejada:\n");
					scanf("%d", &qtd_produto);
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 4.00 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = n_adiciona;        
					carrinho[linha_carrinho][1] = qtd_produto;        
					carrinho[linha_carrinho][2] = (int)subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 104:
					
					printf("Digite o quantidade desejada:\n");
					scanf("%d", &qtd_produto);
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 3.80 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = n_adiciona;        
					carrinho[linha_carrinho][1] = qtd_produto;        
					carrinho[linha_carrinho][2] = (int)subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				case 105:
				
					printf("Digite o quantidade desejada:\n");
					scanf("%d", &qtd_produto);
					if (qtd_produto <= 0){
					printf("Quantidade Insuficiente. \n");	
					break;
					}
					
					for(i = 0; i < 10; i++){
						if(codigos[i] == n_adiciona){
							int indice = i;
						}
					subtotal = 2.50 * (double)qtd_produto;
					
					
					carrinho[linha_carrinho][0] = n_adiciona;        
					carrinho[linha_carrinho][1] = qtd_produto;        
					carrinho[linha_carrinho][2] = (int)subtotal;
							
					linha_carrinho++;
					break;
					}
				break;
				
				default:
					printf("Codigo nao Encontrado. \n");
					break;
			}
			break;
		case 3:
			printf("Saindo do Sistema e Imprimindo a Nota Fiscal:\n");
			break;
		default:
			printf("Opcao errada! \n");
			break;
		} 
		
	}while(entrada != 3);

		// elaborando a nota fiscal do sistema:
	
printf("\n|========= NOTA FISCAL ========|\n");  
double total_geral = 0;
int j, codigo, quantidade;
for (i = 0; i < linha_carrinho; i++) {
    codigo = (int)carrinho[i][0];
    quantidade = (int)carrinho[i][1];
    subtotal = carrinho[i][2];
    for (j = 0; j < 5; j++) {
        if (codigos[j] == codigo) {
            printf("%s - %d un x R$ %.2f = R$ %.2f\n",
                   nomes[j], quantidade, precos[j], subtotal);
            total_geral += subtotal;
            break;
        }
    }
}
printf("\nTOTAL A PAGAR: R$ %.2f\n", total_geral);

}
	
}}