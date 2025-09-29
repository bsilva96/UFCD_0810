////// instrução para permitir ultrapassar a mensagem de erro
////// do scanf()
////#define _CRT_SECURE_NO_WARNINGS
////
//////importar bilbiotecas para o nosso projeto
////#include <stdio.h>
////#include <stdlib.h>
////
////void exercicio1() {
////	//Decalaracao do vetor com 5 elementos
////	int numeros[5];
////
////	//colocar os valores dentro do vetor (de forma manual)
////	numeros[0] = 12;
////	numeros[1] = 21;
////	numeros[2] = 7;
////	numeros[3] = 9;
////	numeros[4] = 31;
////
////	//mostrar os valores dentro do vetor (forma manual)
////	printf("Valor do indice 0: %d \n", numeros[0]);
////	printf("Valor do indice 1: %d \n", numeros[1]);
////	printf("Valor do indice 2: %d \n", numeros[2]);
////	printf("Valor do indice 3: %d \n", numeros[3]);
////	printf("Valor do indice 4: %d \n", numeros[4]);
////}
////
////void exercicio2() {
////	//declaracao de um vetor com 5 elementos
////	int lista[5];
////
////	//Estrutura de repeticao automática FOR
////	//para automatizar o processo da obtenção da informação
////	//Parametro 1: valor minimo a processar
////	//Parametro 2: condição máxima que pode atingir
////	//Parametro 3: incrementar +1 de cada vez que repetir a
////	//estrutura de repetição
////	for (int i = 0; i < 5; i++) {
////		//mostrar a mensagem do indice que está a percorrer atualmente
////		printf("Valor do indice %d: ", i);
////		//ler o valor do teclado e colocar no indice do vetor atual
////		scanf("%d", &lista[i]);
////	}
////
////	//como ler o vetor e mostrar os valores dos indices
////	for (int i = 0; i < 5; i++) {
////		printf("Valor do indice %d: %d \n", i, lista[i]);
////	}
////}
////
////void exercicio3() {
////	//criacao do vetor decimais com 6 elementos
////	float notas[6];
////
////	//declaracao de variaveis
////	int positivos = 0;
////	int negativos = 0;
////
////	//estrutura de repeticao FOR para pedir os valores decimais
////	for (int i = 0; i < 6; i++) {
////		printf("Valor do indice %d: ", i);
////		//pedir o valor decimal ao utilizador para armazenar no vetor
////		scanf("%f", &notas[i]);
////	}
////
////	//estrutura de repeticao para ler os valores do vetor
////	for (int i = 0; i < 6; i++) {
////		//estrutura de decisao dupla para avaliar se o valor que 
////		//estiver a percorrer é positivo ou é negativo
////		if (notas[i] < 0) {
////			negativos++; //negativos = negativos + 1;
////		}
////		else {
////			positivos++; //positivos = positivos + 1
////		}
////	}
////
////	//mostrar quantos positivos e negativos detetou
////	printf("Numero de positivos: %d e negativos: %d", positivos, negativos);
////
////}
////
////void exercicio4() {
////	//criacao do vetor inteiro com 5 elementos
////	int valores[5];
////
////	//estrutura de repeticao para inserir valores no vetor
////	for (int x = 0; x < 5; x++) {
////		//declaracao de variavel só para correr dentro do FOR
////		int valor = 0;
////
////		//estrutura de repeticao do ... while que vai servir
////		//para verificar se os numeros são diferentes de 1
////		do {
////			printf("Insira o valor para o indice %d: ", x);
////			scanf("%d", &valor);
////		} while (valor == 1);
////
////		//Só depois de ultrapassar a condição do do ... while
////		//é que vamos assumir o novo valor no vetor, ou seja,
////		//o valor introduzido foi diferente de 1
////		valores[x] = valor;
////	}
////
////	//estrutura de repeticao para ler os valores no vetor
////	for (int x = 0; x < 5; x++) {
////		printf("Valor do indice %d e: %d \n", x, valores[x]);
////	}
////}
////
////void exercicio5() {
////	//declaracao do vetor com 5 elementos
////	int numeros[5];
////
////	//estrutura de repeticao FOR para inserir valores no vetor
////	for (int i = 0; i < 5; i++) {
////		printf("Insira o valor do indice %d: ", i);
////		scanf("%d", &numeros[i]);
////	}
////
////
////
////	//estrutura de repeticao FOR para ler os valores
////	for (int i = 0; i < 5; i++) {
////		printf("Valor do indice %d: %d \n", i, numeros[i]);
////
////		//estrutura de decisão simples para verificar se 
////		//o elemento do indice tem o valor 5
////		if (numeros[i] == 5) {
////			printf("Este indice tem o valor 5! \n");
////		}
////	}
////}
////
//////Função para verificar se existe um numero igual no vetor
////// e retornar 2 respostas:
////// 0 caso não encontre nenhum numero repetido
////// 1 caso encontre numero repetido
////int verifica_numeros(int vetor[5], int valor) {
////	//estrutura de repeticao para ler os valores do vetor
////	for (int i = 0; i < 5; i++) {
////		//estrutura de decisao simples para verificar
////		//se existe o numero repetido dentro do vetor
////		if (vetor[i] == valor) {
////			return 1;
////		}
////	}
////
////	//se nao acontecer nada dentro da repticao do FOR
////	//significa se não encontrou nenhum numero repetido
////	return 0;
////}
////
//////procedimento para calcular a media os numeros de um vetor
////void calcula_media(int vetor[5]) {
////	//percorrer todos os elementos do vetor e somar todos os valores
////	float soma = 0;
////
////	//estrutura de repeticao para percorrer o vetor que recebemos
////	for (int i = 0; i < 5; i++) {
////		//somar todos os numeros que existem no vetor
////		soma = soma + vetor[i];
////	}
////
////	//Mostrar o resultado da média
////	printf("Média dos numeros no vetor: %f", (soma / 5));
////}
////
////void exercicio6() {
////	//declaracao do vetor com 5 elementos
////	int vetor[5];
////
////	//estrutura de repeticao FOR para inserir valores no vetor
////	for (int i = 0; i < 5; i++) {
////		//declarar variavel para armazenar o valor
////		int valor = 0;
////
////		//estrutura de repeticao do ... while para receber e depois avaliar 
////		//o valor inserido no teclado e deve repetir o código se a função
////		//verifica_numeros retornar o valor 1
////		do {
////			//pedir a informação ao utilizador
////			printf("Insira o valor para o indice %d: ", i);
////			scanf("%d", &valor);
////		} while (verifica_numeros(vetor, valor) == 1);
////
////		//Só depois de ultrapassar a condição do do ... while
////		//é que vamos assumir o novo valor no vetor, ou seja,
////		//o valor introduzido foi diferente de 1
////		//logo não existe numero repetido
////		vetor[i] = valor;
////	}
////
////	//invocar o procedimento e mostrar a media
////	calcula_media(vetor);
////}
////
////void exercicio7() {
////	//declarar um array multidimensional (matriz)
////	//um matriz é composta por linhas e colunas
////	int matriz[3][3];
////
////	//Como a matriz tem linhas e colunas, precisamos de 2 estruturas
////	//de repetição para processar as mesmas
////
////	//para inserir valores na matriz
////	for (int i = 0; i < 3; i++) { //percorrer as linhas da matriz
////		for (int j = 0; j < 3; j++) { //percorrer as colunas da linha que está a processar
////			//a intersecao do valor da linha i e a coluna j permite colocar o valor da celula
////			printf("Insira o valor da linha %d e da coluna %d: ", i, j);
////			scanf("%d", &matriz[i][j]);
////		}
////	}
////
////	//ler valores da matriz
////	for (int i = 0; i < 3; i++) { //percorrer as linhas da matriz
////		for (int j = 0; j < 3; j++) { //percorrer as colunas da linha que está a processar
////			printf("Valor na linha %d e coluna %d: %d \n", i, j, matriz[i][j]);
////		}
////	}
////}
////
////void main() {
////	//exercicio1();
////	//exercicio2();
////	//exercicio3();
////	//exercicio4();
////	//exercicio5();
////	//exercicio6();
////	//exercicio7();
////
////}
//
//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h> 
//
//#define NRegistos 20
//
//struct Pessoa {
//	int ID;
//	char Nome[50];
//	int Idade;
//};
//
//struct Pessoa registos[NRegistos];
//
//int contador_registos = 0;
//
//void mostra_registos() {
//	printf("\n*** Lista Registos: ***\n");
//
//	for (int i = 0; i < contador_registos; i++) {
//		printf("ID: %d, Nome: %s, Idade: %d \n", registos[i].ID, registos[i].Nome, registos[i].Idade);
//	}
//
//	printf("\n Prima qualquer tecla para continuar... ");
//	getch();
//
//	system("@cls||clear");
//}
//
//void inserir_registos() {
//	printf("\nInserir registo: \n\n");
//
//	printf("ID: ");
//	scanf("%d", &registos[contador_registos].ID);
//
//	printf("Nome: ");
//	scanf("%s", registos[contador_registos].Nome);
//
//	printf("Idade: ");
//	scanf("%d", &registos[contador_registos].Idade);
//
//	//aumenta contador de registos
//	contador_registos++;
//
//	system("@cls||clear");
//}
//
//void alterar_registos() {
//	//decalracao das variaveis
//	int valor = 0;
//	bool encontrou = false;
//
//	printf("Qual o ID que deseja procurar: ");
//	scanf("%d", &valor);
//
//	//percorrer todos os registos com a estrutura de repetição
//	for (int i = 0; i < contador_registos; i++) {
//		//verificar se existe o registo
//		if (registos[i].ID == valor) {
//			//alterar variavel encontrou para true
//			encontrou = true;
//
//			printf("*** Alterar Registo ID %d: ***\n", i);
//
//			printf("ID: ");
//			scanf("%d", registos[i].ID);
//
//			printf("Nome: ");
//			scanf("%s", registos[i].Nome);
//
//			printf("Idade: ");
//			scanf("%d", &registos[i].Idade);
//		}
//	}
//
//	//mostrar mensagem de não econtrou nenhum registo
//	if (encontrou == false) {
//		printf("Não foi encontrado registo com esse ID. \n");
//	}
//}
//
//void remover_registos() {
//	//decalracao das variaveis
//	int valor = 0;
//	bool encontrou = false; 
//
//	printf("Qual o ID que deseja remover: ");
//	scanf("%d", &valor);
//
//	//percorrer todos os registos com a estrutura de repetição
//	for (int i = 0; i < contador_registos; i++) {
//		//verificar se existe o registo
//		if (registos[i].ID == valor) {
//			//alterar variavel encontrou para true
//			encontrou = true;
//
//			//A partir do registo que encontrou, substitui a infomração
//			// pelo o próximo registo e repete a mesma operação até ao
//			// final da lista
//			for (int j = i;	j < NRegistos; j++) {
//				registos[j] = registos[j + 1];
//			}
//
//			//remove 1 registo do contador de registos
//			contador_registos--;
//			printf("*** Registo com o ID %d foi removido. ***\n", valor);
//		}
//	}
//
//	//mostrar mensagem de não econtrou nenhum registo
//	if (encontrou == false) {
//		printf("Não foi encontrado registo com esse ID. \n");
//	}
//}
//
//void main() {
//	//decalração de variaveis
//	int opcao = 0;
//
//	//estrutura de repetição para exibir o menu
//	//repete o menu enquanto o valor for diferente de 5
//	do {
//		printf("***** MENU *****\n\n");
//		printf("1 - Inserir Registo\n");
//		printf("2 - Alterar Registo\n");
//		printf("3 - Remover Registo\n");
//		printf("4 - Mostrar Registos\n");
//		printf("5 - Sair do programa\n\n");
//
//		//pedir a opcao ao utilizador
//		printf("Insira opcao: ");
//		scanf("%d", &opcao);
//
//		switch (opcao) {
//			case 1: inserir_registos(); break;
//			case 2: alterar_registos(); break;
//			case 3: remover_registos(); break;
//			case 4: mostra_registos(); break;
//			case 5: break;
//		}
//	} while (opcao != 5);
//}