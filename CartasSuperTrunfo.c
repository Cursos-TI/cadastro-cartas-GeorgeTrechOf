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

  //Os "printf" são para perguntar a informação é os "scanf" pegão a informação é armazenam
  printf("Qual é a população da cidade ? \n"); //pergunta
  scanf("%d",& populacao); //respode e arnazena

  printf("Qual a área da cidade ?\n");
  scanf ("%f",& area);

  printf("Qual o PIB da cidade ?\n");
  scanf ("%f",& PIB);

  printf("Quantos pontos turísticos ela tem ?\n");
  scanf ("%d",& Numero_de_pontos_turisticos);


  // Área para exibição dos dados da cidade

  //aqui em baixo eles mostram os dados coletados 
  printf ("\n Dados da cidade: \n"); //colocado pra ter um divisão entre os dados e as perguntas
  printf ("A população da cidade é de %d\n", populacao);
  printf ("A área é: %f\n", area);
  printf ("O PIB é de: %f \n", PIB);
  printf ("A quatidade de pontos turísticos é: %d \n", Numero_de_pontos_turisticos);

return 0;
} 
