#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaracao de variáveis para carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int  populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  // Declaracao de variáveis para carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int  populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Área para entrada de dados

  // Exibindo instruções iniciais do jogo
  printf("== SUPER TRUNFO - CADASTRO DE CARTAS ==\n\n");
  
  // Leitura dos dados da Carta 1
  printf("-- CADASTRO DA CARTA 1 -- \n");

  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade1);  // Lê string com espaços

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a area (Km2): ");
  scanf("%f", &area1);
  
  printf("Digite o PIB (bilhoes de reais): ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%f", &pontos_turisticos1);

  printf("\n");



  // Área para exibição dos dados da cidade

return 0;
} 
