// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	//Inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;
	char linha[1000];  //para armazenar as linhas lidas dos ficheiros

	//a funcao fopen tem 2 parametros:
	//Parametro 1 - localizacao do ficheiro
	//Parametro 2 - modo de abertura
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		printf("Informação do ficheiro: \n\n");

		//Precisamos de um estrutura de repetição pois a função fgets
		//le o conteudo linha a linha
		while (fgets(linha, 1000, fp) != NULL) { //enquanto nao atingir o fim do ficheiro
			printf("%s", linha);
		}
	}

	//fechar o ficheiro que foi aberto
	fclose(fp);
}

void exercicio2() {
	//Inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;

	//a funcao fopen tem 2 parametros:
	//Parametro 1 - localizacao do ficheiro
	//Parametro 2 - modo de abertura
	//fp = fopen("ficheiro1.txt", "r");

	if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		char texto[50] = "onde esta o texto? \n sera que quebrou?";
		//funcao fputs tem 2 parametros: variavel e ficheiro
		fputs(texto, fp);
	}

	//fechar o ficheiro que foi aberto
	fclose(fp);
}

void exercicio3() {
	//Inicializar um ficheiro e colocar o modo de abertura
	FILE* fp;
	char linha[1000];  //para armazenar as linhas lidas dos ficheiros

	//a funcao fopen tem 2 parametros:
	//Parametro 1 - localizacao do ficheiro
	//Parametro 2 - modo de abertura
	if ((fp = fopen("teste.txt", "w+")) == NULL) {
		printf("Impossivel abrir/criar o ficheiro pretendido \n");
		exit(1);
	}
	else {
		//escrever uma frase dentro do ficheiro com o fputs
		fputs("Isto e uma experiencia utilizando o tema de acesso a informação de forma direta", fp);

		//funcao FSEEK serve para posicionar no ficheiro
		//Parametro 1: indicar qual o ficheiro a trabalhar
		//Parametro 2: indicar a localizacao no ficheiro
		//Parametro 3: qual o modo de leitura (inicio (SEEK_SET), 
		//			   especifico (SEEK_CUR) ou fim ((SEEK_END))
		fseek(fp, 0, SEEK_SET);

		//funcao fgets para obter 60 carateres para a varivel linha
		fgets(linha, 60, fp);

		//mostrar o que foi obtido
		printf("Utilizando o FSEEK com SEEK_SET: \n %s \n\n", linha);


		//utilizar a funcao fseek para colocar a leitura da informação no caracter 21
		fseek(fp, 21, SEEK_SET);
		//funcao fgets para obter a infomração
		fgets(linha, 6, fp);
		//exibir a informação
		printf("Utilizando o FSEEK com SEEK_SET na posicao caracter 21: \n %s \n\n", linha);

		//utilizar o fseek e retirar 10 carateres (em relação ao exercicio anterior)
		fseek(fp, -10, SEEK_CUR);
		fgets(linha, 100, fp);
		printf("Depois de usar o Seek_cur e retirar 10 carateres na posição atual: \n %s \n\n", linha);
	}
}

void exercicio_teste() {

}

void main() {
	//exercicio1();
	//exercicio2();
	exercicio3(); 
	exercicio_teste();
}