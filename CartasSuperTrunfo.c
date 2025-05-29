// Criando As castas do Super Trunfo

#include <stdio.h>
#include<string.h> // Adicionado para strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro 

int main() {
    int populacao_1, pontosturisticos_1, populacao_2, pontosturisticos_2;
	float area_1, pib_1, area_2, pib_2;
	char estado_1, codigo_1[10], nomecidade_1[50], estado_2, codigo_2[10], nomecidade_2[50];

// Lendo as informações da 1° Carta

    printf("Informações 1º Carta \n");
	// Estado
	printf("Qual letra representa o Estado: \n");
	scanf("%c", &estado_1);

    // Código
	printf("Qual o código da carta: \n");
	scanf("%s", codigo_1);

	// Cidade
    getchar(); // limpa o buffer antes do fgets
	printf("Qual é o nome da cidade: \n");
	fgets(nomecidade_1, 50, stdin);
	nomecidade_1[strcspn(nomecidade_1,"\n")] = '\0';

	// População
	printf("Qual a população: \n");
	scanf("%d", &populacao_1); 

	// Área
	printf("Qual a área em km²: \n");
	scanf("%f", &area_1);

	// PIB
	printf("Qual é o valor do PIB: \n");
	scanf("%f", &pib_1);

    // Pontos Turísticos
	printf("Quantidade de Pontos Turísticos: \n");
	scanf("%d", &pontosturisticos_1); 

// Lendo as informações da 2° Carta

    printf("\nInformações 2º Carta \n");
	// Estado
	printf("Qual letra representa o Estado: \n");
	scanf(" %c", &estado_2);

// Código
	printf("Qual o código da carta: \n");
	scanf("%s", codigo_2);

	// Cidade
    getchar(); // limpa o buffer antes do fgets
	printf("Qual é o nome da cidade: \n");
	fgets(nomecidade_2, 50, stdin);
	nomecidade_2[strcspn(nomecidade_2,"\n")] = '\0';

	// População
	printf("Qual a população: \n");
	scanf("%d", &populacao_2); 

	// Área
	printf("Qual a área em km²: \n");
	scanf("%f", &area_2);

	// PIB
	printf("Qual é o valor do PIB: \n");
	scanf("%f", &pib_2);

	// Pontos Turísticos
	printf("Quantidade de Pontos Turísticos: \n");
	scanf("%d", &pontosturisticos_2); 

    // Apresentação dos Valores das Cartas
	//Carta 1
	printf("\nCarta 1: \n");
	printf("Estado: %c \n", estado_1); 
	printf("Código: %s \n", codigo_1);
	printf("Nome da Cidade: %s \n", nomecidade_1);
	printf("População: %d \n", populacao_1);
	printf("Área: %.2f \n", area_1);
	printf("PIB: %.2f \n", pib_1);
	printf("Pontos Turísticos: %d \n", pontosturisticos_1);

    //Carta 2
	printf("\nCarta 2: \n");
	printf("Estado: %c \n", estado_2); 
	printf("Código: %s \n", codigo_2);
	printf("Nome da Cidade: %s \n", nomecidade_2);
	printf("População: %d \n", populacao_2);
	printf("Área: %.2f \n", area_2);
	printf("PIB: %.2f \n", pib_2);
	printf("Pontos Turísticos: %d \n", pontosturisticos_2);

    return 0;
}
