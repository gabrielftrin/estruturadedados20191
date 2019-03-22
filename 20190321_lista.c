#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char lista_sites[10][10];

void opcao();

int menu(void) {
 	int opt;
 
	printf("\nEscolha uma acao abaixo:\n\n");
	printf("0 - Sair\n");
	printf("1 - Inserir no final da lista de sites.\n");
	printf("2 - Imprimir cada site seguindo a ordem da lista\n");
	printf("3 - Ver o link (endereço) de um site\n\n");
	printf("Opcao: "); scanf("%d", &opt);
	printf("\n");
 
	return opt;
}

int insere_final (){

	char nome[20], url[20];

	printf("Digite o nome do site: ");
	scanf("%s", nome);
	printf("Digite a url do site: ");
	scanf("%s", url);

	//printf("\nVoce digitou o nome: %s\ne url %s\n", nome,url);
	int indice=0;
	int i,j;
	for (i=0;i==10;i++){
			if(strlen(lista_sites[i]) == 0){
				indice=i;
				break;
		}
	}

	strcpy(lista_sites[i], nome);
	printf("%s\n", lista_sites[i]);
/*
	int x,y,i,j;
	x=0;y=0;i=1;j=0;

	if (lista_sites[x][y] == NULL && lista_sites[i][j] == NULL) {
			lista_sites[x][y]=nome;
			lista_sites[i][j]=url;
	}  
	else {

		printf("a lista nao esta vazia\n");
	}
*/
	opcao(menu());

}

void opcao (int op) {

	do {

		switch(op){
			  case 0:
				   exit(0);
				   break;
			   
			  case 1:
				   insere_final();
				   break;

			  default: {
				   printf("Comando invalido. Tente novamente...\n\n");
				   sleep(1);
				   printf("\n===============================");
				   printf("\n===============================\n");
				   menu();

			  }
		}
	} while (op<3);
}

void main (){

	opcao(menu());

}
