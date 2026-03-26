#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() 
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Variaveos para a carta 1
  char nome1 [5];
  char estado1 [5];
  char codigo1[5];
  int populacao1, Numero_de_pontos_turisticos1;
  float area1, pib1;
  float densidade1,pib_percapta1;
  float superpoder1;

  //Variaveos para a carta 2
  char estado2 [5]; 
  char codigo2 [5];
  char nome2 [5];
  int populacao2, Numero_de_pontos_turisticos2;
  float area2, pib2;
  float densidade2, pib_percapta2;
  float superpoder2;

  
  // Área para entrada de dados

  //Os "printf" são para perguntar a informação é os "scanf" pegão a informação é armazenam

    printf("*** Cartas Super  Trunfo ***\n\n");

    //coletando as informações da carta 1
    printf("** Digite as informaçoes da carta 1 **\n");

    printf("A qual estado a carta pertence ?\n"); //pergunta
    scanf("%s",& estado1); //a resposta e arnazena

    printf("Qual o código da cidade ?\n");
    scanf ("%s",& codigo1);

    printf("Qual o nome da cidade ?\n");
    scanf ("%s",& nome1);

    printf("Qual a população da cidade ?\n");
    scanf ("%d",& populacao1);

    printf("Qual a área da cidade ?\n");
    scanf ("%f",& area1);

    printf("Qual o PIB da cidade ?\n");
    scanf ("%f",& pib1);

    printf("Quantos pontos turísticos ela tem ?\n");
    scanf ("%d",& Numero_de_pontos_turisticos1);

    densidade1= populacao1/area1;
    pib_percapta1= pib1 / populacao1;
    superpoder1= populacao1 + pib1 + pib_percapta1 + (-densidade1);


//coletando as informações da carta 2
    printf("** Digite as informaçoes da carta 2 **\n");

    printf("A qual estado a carta pertence ?\n"); //pergunta
    scanf("%s",& estado2); //a resposta e arnazena

    printf("Qual o código da cidade ?\n");
    scanf ("%s",& codigo2);

    printf("Qual o nome da cidade ?\n");
    scanf ("%s",& nome2);

    printf("Qual a população da cidade ?\n");
    scanf ("%d",& populacao2);

    printf("Qual a área da cidade ?\n");
    scanf ("%f",& area2);

    printf("Qual o PIB da cidade ?\n");
    scanf ("%f",& pib2);

    printf("Quantos pontos turísticos ela tem ?\n");
    scanf ("%d",& Numero_de_pontos_turisticos2);

    densidade2= populacao2/area2;
    pib_percapta2= pib2 / populacao2;
    superpoder2= populacao2 + pib2 + pib_percapta2 + (-densidade2);

// Área para exibição dos dados da cidade
    printf("*** TODAS AS INFORMAÇÕES COLETADAS*** \n *EXIBINDOS INFORMAÇÕES*\n");

//aqui em baixo eles mostram os dados coletados da carta 1
    printf("\n### Carta 1 ###\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", nome1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %f km² \n", area1);
    printf ("PIB: %f bilhões de reais \n", pib1);
    printf ("Número de Pontos Turísticos: %d \n", Numero_de_pontos_turisticos1);
    printf ("Densidade Populacional: %f \n", densidade1);
    printf ("PIB per Capita: %f \n", pib_percapta1);
    printf ("Super poder: %f \n", superpoder1);


//aqui em baixo eles mostram os dados coletados da carta 2
    printf("\n### Carta 2 ###\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nome2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %f km² \n", area2);
    printf ("PIB: %f bilhões de reais \n", pib2);
    printf ("Número de Pontos Turísticos: %d \n", Numero_de_pontos_turisticos2);
    printf ("Densidade Populacional: %f \n", densidade2);
    printf ("PIB per Capita: %f \n", pib_percapta2);
    printf ("Super poder: %f \n\n", superpoder2);

    // Exibindo o placar e comparando dados das cartas

    printf("*** Competição das Cartas *** \n\n");

    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade1 < densidade2));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_percapta1 > pib_percapta2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (superpoder1 > superpoder2));


return 0;
}