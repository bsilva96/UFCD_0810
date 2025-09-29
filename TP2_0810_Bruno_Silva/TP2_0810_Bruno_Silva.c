// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

//estruturas
struct Empresa {
	int NIF;
	char Nome[25];
	char Tipo_Empresa[25];
	int Ano_Fundacao;
	int Qtd_Trabalhadores;
};

struct Funcionario {
	int ID;
	char Nome[25];
	char Cargo[50];
	float Salario;
};

void Mostra_Empresa(struct Empresa registo) { 
	printf("NIF: %d \n", registo.NIF);
	printf("Nome: %d \n", registo.Nome);
	printf("Tipo Empresa: %s \n", registo.Tipo_Empresa);
	printf("Ano Fundacao: %d \n", registo.Ano_Fundacao);
	printf("Qtd Trabalhadores: %d \n", registo.Qtd_Trabalhadores);
}

void Mostra_Funcionario(struct Funcionario registo) {
	printf("ID: %d \n", registo.ID);
	printf("Nome: %s \n", registo.Nome);
	printf("Cargo: %s \n", registo.Cargo);
	printf("Salario: %f \n", registo.Salario);
}

void exercicio1() {
	//criar a variavel estruturada com base na Empresa
	struct Empresa registos_empresas[4];

	//estrutura de repeticao FOR para inserir registos
	for (int i = 0; i < 4; i++) {
		printf("Registo %d \n", i);

		printf("Insira o NIF: ");
		scanf("%d", &registos_empresas[i].NIF);

		printf("Insira o Nome: ");
		scanf("%s", registos_empresas[i].Nome);

		printf("Insira o Tipo Empresa: ");
		scanf("%s", registos_empresas[i].Tipo_Empresa);

		printf("Insira o Ano da Fundação: ");
		scanf("%d", &registos_empresas[i].Ano_Fundacao);

		printf("Insira a quantidade de trabalhadores: ");
		scanf("%d", &registos_empresas[i].Qtd_Trabalhadores);
	}

	//ler as informações com o procedimento Mostra_Empresa
	for (int i = 0; i < 4; i++) {
		Mostra_Empresa(registos_empresas[i]);
	}
}

void exercicio2() {
	//criar a variavel estruturada com base na Funcionario
	struct Funcionario registos_funcionarios[3];

	//estrutura de repeticao FOR para inserir registos
	for (int i = 0; i < 3; i++) {
		printf("Registo %d \n", i);

		printf("Insira o ID: ");
		scanf("%d", &registos_funcionarios[i].ID);

		printf("Insira o Nome: ");
		scanf("%s", registos_funcionarios[i].Nome);

		printf("Insira o Cargo: ");
		scanf("%s", registos_funcionarios[i].Cargo);

		printf("Insira o Salario: ");
		scanf("%f", &registos_funcionarios[i].Salario);
	}

	//ler as informações com o procedimento Mostra_Empresa
	for (int i = 0; i < 3; i++) {
		printf("\nRegisto %d \n", i);
		Mostra_Funcionario(registos_funcionarios[i]);
	}
}

void main() {
	//exercicio1();
	exercicio2();
}