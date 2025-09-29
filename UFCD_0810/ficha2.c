//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Atleta {
//	int ID;
//	char nome[25];
//	int idade;
//	float peso;
//} Atleta_info;
//
//
//void main() {
//	//declaracao de uma variavel do tipo estrutura
//	Atleta_info atleta1 = {1, "Ana", 12, 55.2};
//	Atleta_info atleta2 = {2, "Marlon", 25, 65.5 };
//
//	struct Atleta atleta3;
//
//	//aceder ao dados da estrutura do atleta3
//	atleta3.ID = 3;
//	strcpy(atleta3.nome, "Luis");
//	atleta3.idade = 24;
//	atleta3.peso = 67.2;
//
//	//criar uma variavel com um numero de registos
//	//baseados em vetores
//	struct Atleta registos[100] = {
//		{1, "Ana", 12, 55.2},
//		{2, "Marlon", 25, 65.5 },
//		{3, "Luis", 24, 67.2 }
//	};
//
//
//
//}