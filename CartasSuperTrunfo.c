#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Variaveos para a carta 1
  char estado1;
  char[] codigo1, nome1;
  int populacao1, Numero_de_pontos_turisticos1;
  float area1, pib1;
  float densidade1,pib_percapta1;

  //Variaveos para a carta 2
  char estado2; 
  char[] codigo2, nome2;
  int populacao2, Numero_de_pontos_turisticos2;
  float area2, pib2;
  float densidade2, pib_percapta2;
  
  // Área para entrada de dados

  //Os "printf" são para perguntar a informação é os "scanf" pegão a informação é armazenam
  printf("*** Cartas Super  Trunfo ***\n\n")

  //coletando as informações da carta 1
  printf("** Digite as informaçoes da carta 1 **\n")

  printf("A qual estado a carta pertence ?\n"); //pergunta
  scanf("%c",& estado1); //a resposta e arnazena

  printf("Qual o código da cidade ?\n");
  scanf ("%c",& codigo1);

  printf("Qual o nome da cidade ?\n");
  scanf ("%c",& nome1);

  printf("Qual a população da cidade ?\n");
  scanf ("%d",& populacao1);

  printf("Qual a área da cidade ?\n");
  scanf ("%f",& area1);

  printf("Qual o PIB da cidade ?\n");
  scanf ("%f",& pib1);

  printf("Quantos pontos turísticos ela tem ?\n");
  scanf ("%d",& Numero_de_pontos_turisticos);

  densidade1= populacao1/area1
  pib_percapta1= pib1 / populacao1


  // Área para exibição dos dados da cidade

  //aqui em baixo eles mostram os dados coletados 
  printf ("\n Dados da cidade: \n"); //colocado pra ter um divisão entre os dados e as perguntas
  printf ("A população da cidade é de %d\n", populacao);
  printf ("A área é: %f\n", area);
  printf ("O PIB é de: %f \n", PIB);
  printf ("A quatidade de pontos turísticos é: %d \n", Numero_de_pontos_turisticos);

return 0;
} 