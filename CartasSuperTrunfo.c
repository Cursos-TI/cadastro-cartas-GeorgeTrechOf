#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao;
  float area;
  float PIB;
  int Numero_de_pontos_turisticos;

  // Área para entrada de dados
  printf("Qual o nome a população da cidade ? \n");
  scanf("%d",& populacao); 

  printf("Qual a área da cidade ?\n");
  scanf ("%f",& area);

  printf("Qual o PIB da cidade ?\n");
  scanf ("%f",& PIB);

  printf("Quantos pontos turísticos ela tem ?");
  scanf ("%d",& Numero_de_pontos_turisticos);


  // Área para exibição dos dados da cidade
  
  printf ("A população da cidade é de %d\n", populacao);
  printf ("A área é: %f\n", area);
  printf ("O PIB é de: %f \n" PIB)
  printf ("A quatidade de pontos turísticos é: %d" Numero_de_pontos_turisticos)

return 0;
} 
