#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int qtd[5], i=0, sair=0, opcao=0, z=0, qtd_venda=0;
	char produto[10][10], nome[10];
	float valor[10], vlr_venda;

	
	do{
		printf("\n### SISTEMA DE PRODUTOS ###");
		printf("\n1 - CADASTRAR");
		printf("\n2 - LISTAR");
		printf("\n3 - BUSCAR");
		printf("\n4 - VENDAS");
		
		printf("\nEscolha uma opção: ");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				printf("\n### CADASTRAR PRODUTO ###");
				
				printf("\n-----");
				
				printf("\nNome: ");
				scanf("%s",&produto[i]);
				printf("\nValor: ");
				scanf("%f",&valor[i]);
				printf("\nQuantidade: ");
				scanf("%d",&qtd[i]);
				
				printf("\n-----");
				i++;
				printf("\n---PRODUTO CADASTRADO COM SUCESSO!---");
				break;
			case 2:
				printf("\n### LISTAR PRODUTO ###");
				
				for(z=0;z<10;z++){
                    			printf("\n-----");
                   			printf("\nNome: %s",produto[z]);
					printf("\nValor: %.2f",valor[z]);
					printf("\nQuantidade: %d",qtd[z]);
					printf("\n-----");
				}
			
				break;
			case 3:
				printf("\n### BUSCAR PRODUTO ###");
				
				
				for(z=0;z<10;z++){
					printf("\nDigite o Nome do Produto: ");
					scanf("%s",&nome);
					if(strcmp(produto[z],nome)==0){
                        			printf("PRODUTO ENCONTRADO");
						printf("\n-----");
						printf("\nNome: %s",produto[z]);
						printf("\nValor: %.2f",valor[z]);
						printf("\nQuantidade %d",qtd[z]);
						printf("\n-----");
					}	
				}
				break;
			case 4:
				printf("\n### VENDA DE PRODUTO ###");

                		for(z=0;z<10;z++){
                   			 printf("\n-----");
                    			printf("\nNome: %s",produto[z]);
					printf("\nValor: %.2f",valor[z]);
					printf("\nQuantidade: %d",qtd[z]);
					printf("\n-----");
				}

                		printf("DIGITE O NOME DO PRODUTO PARA COMPRA\n");
				scanf("%s",&nome);
                		for ( z = 0; z < 10; z++)
                		{
                   			 if(strcmp(produto[z],nome)==0){
                        			printf("PRODUTO ENCONTRADO");
						printf("\n-----");
						printf("\nNome: %s",produto[z]);
						printf("\nValor: %.2f",valor[z]);
						printf("\nQuantidade %d",qtd[z]);
						printf("\n-----");

                       				 printf("Digite a quantidade que deseja comprar\n");
                      				  scanf("%d",&qtd_venda);

                       				 vlr_venda = qtd_venda * valor[z];
                       				 qtd[z] -= qtd_venda;
                        			printf("VALOR DA COMPRA: %.2f\n", vlr_venda);
                        			printf("VENDA REALIZADA COM SUCESSO");
                        
					}	
               		 	}
                
				break;
			default:
				printf("\n---Op��o Inv�lida!---\n");
				break;
		}
		
		printf("\nDigite 1 p/ Continuar ou 0 p/ Sair: ");
		scanf("%d",&sair);
	}while(sair != 0);

}
