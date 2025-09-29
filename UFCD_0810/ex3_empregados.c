//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
////Passo 1 - Criar a estrutura empregado
//struct Empregado {
//	char nome[50];
//	char cargo[50];
//	int idade;
//	float salario;
//};
//
////Passo 2 - Procedimento para ler as informações
//void imprime_pesssoa(struct Empregado registo) {
//	printf("Nome: %s \n", registo.nome);
//	printf("Cargo: %s \n", registo.cargo);
//	printf("Idade: %d \n", registo.idade);
//	printf("Salario: %f \n", registo.salario);
//}
//
//void main() {
//	//declaracao e criacao de um vetor com 3 elementos
//	//baseado na estrutura Empregado
//	struct Empregado registos_empregados[3];
//
//	//Inserir valores dentro da estrutura registo (baseado
//	//na struct Empregado)
//	for (int i = 0; i < 3; i++) {
//		//limpar os dados do teclado que estão em memória
//		fflush(stdin);
//
//		//Pedir os dados para preencher os valores da estrutura
//		//registo a registo
//		printf("\nDados do empregado %d: \n", i + 1);
//
//		printf("Nome: ");
//		scanf("%s", registos_empregados[i].nome);
//
//		printf("Cargo: ");
//		scanf("%s", registos_empregados[i].cargo);
//
//		printf("Idade: ");
//		scanf("%d", &registos_empregados[i].idade);
//
//		printf("Salario: ");
//		scanf("%f", &registos_empregados[i].salario);
//	}
//
//	//Estrutura de repeticao para ler os valores dentro da estrutura
//	//registos (baseado no strcut Empregado)
//	for (int i = 0; i < 3; i++) {
//		//mostrar a mensagem do registo que está a percorrer
//		printf("\n\nRegisto do Empregado %d \n\n", i + 1);
//
//		//invocar o procedimento imprime_pessoa passando o registo
//		//atual que está a percorrer e mostrar o mesmo padrão de dados
//		imprime_pesssoa(registos_empregados[i]);
//	}
//
//}