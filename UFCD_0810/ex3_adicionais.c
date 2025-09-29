//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Animal {
//	int ID;
//	char Nome[25];
//	int Idade;
//	float Peso;
//};
//
//struct Veterinario {
//	int ID;
//	char Nome[25];
//	int Idade;
//	char Cidade[25];
//};
//
//void Mostra_Animal(struct Animal registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.Nome);
//	printf("Idade: %d \n", registo.Idade);
//	printf("Peso: %f \n", registo.Peso);
//}
//
//void Mostra_Veterinario(struct Veterinario registo) {
//	printf("ID: %d \n", registo.ID);
//	printf("Nome: %s \n", registo.Nome);
//	printf("Idade: %d \n", registo.Idade);
//	printf("Cidade: %s \n", registo.Cidade);
//}
//
//void exercicio1(){
//	//declaracao de uma variavel do tipo estrutura
//	//baseado no Animal
//	struct Animal registos_animais[3];
//
//	//inserir informações com uma estrutura de repetição
//	for (int i = 0; i < 3; i++) {
//		printf("Inserir Registo %d \n", i);
//
//		printf("Insira o ID: ");
//		scanf("%d", &registos_animais[i].ID);
//
//		printf("Insira o nome: ");
//		scanf("%s", registos_animais[i].Nome);
//
//		printf("Insira a idade: ");
//		scanf("%d", &registos_animais[i].Idade);
//
//		printf("Insira o peso: ");
//		scanf("%f", &registos_animais[i].Peso);
//	}
//
//	//ler a infomração da estrutura registos_animais
//	for (int i = 0; i < 3; i++) {
//		Mostra_Animal(registos_animais[i]);
//	}
//}
//
//void exercicio2() {
//	//declaracao de uma variavel do tipo estrutura
//	//baseado no Veterinario e que pode armaznar 3 registos
//	struct Veterinario registos_veterinarios[3];
//
//	//inserir informações com uma estrutura de repetição
//	for (int i = 0; i < 3; i++) {
//		printf("Registo Veterinario %d \n", i);
//
//		printf("Insira o ID: ");
//		scanf("%d", &registos_veterinarios[i].ID);
//
//		printf("Insira o nome: ");
//		scanf("%s", registos_veterinarios[i].Nome);
//
//		printf("Insira a idade: ");
//		scanf("%d", &registos_veterinarios[i].Idade);
//
//		printf("Insira a cidade: ");
//		scanf("%s", registos_veterinarios[i].Cidade);
//	}
//
//	//ler os registos da estrutura
//	for (int i = 0; i < 3; i++) {
//		Mostra_Veterinario(registos_veterinarios[i]);
//	}
//}
//
//void main() {
//	//exercicio1();
//	exercicio2();
//}