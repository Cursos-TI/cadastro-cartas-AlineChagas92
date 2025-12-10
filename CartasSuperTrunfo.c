#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // VARIÁVEIS CARTA 1
  char Estado1[3];
  char CodigoCarta1[4];
  char Cidade1[50];
  int Populacao1;
  float AreaKm1;
  float PIB1;
  int NumPontosTuristicos1;

  // VARIÁVEIS CARTA 2
  char Estado2[3];
  char CodigoCarta2[4];
  char Cidade2[50];
  int Populacao2;
  float AreaKm2;
  float PIB2;
  int NumPontosTuristicos2;

  // Área para entrada de dados 
  // INPUT CARTA 1
  printf ("DESAFIO SUPER TRUNFO - NOVATO \n DADOS CARTA 1 \n");

  printf ("Digite o Estado: \n");
  scanf (" %2s", Estado1);  

  printf ("Digite o Código da Carta: \n");
  scanf (" %3s", CodigoCarta1);

  printf ("Digite o Nome da Cidade: \n");
  scanf (" %49[^\n]", Cidade1);

  printf ("População: \n");
  scanf (" %d", &Populacao1);

  printf ("Digite a Área em Km²: \n");
  scanf (" %f", &AreaKm1);

  printf ("Digite PIB: \n");
  scanf (" %f", &PIB1);

  printf ("Digite Quantos Pontos Turísticos tem: \n");
  scanf (" %d", &NumPontosTuristicos1);

  // INPUT CARTA 2
  printf ("DESAFIO SUPER TRUNFO - NOVATO \n DADOS CARTA 2 \n");
  
  printf ("Digite o Estado: \n");
  scanf (" %2s", Estado2);  

  printf ("Digite o Código da Carta: \n");
  scanf (" %3s", CodigoCarta2);

  printf ("Digite o Nome da Cidade: \n");
  scanf (" %49[^\n]", Cidade2);

  printf ("População: \n");
  scanf (" %d", &Populacao2);

  printf ("Digite a Área em Km²: \n");
  scanf (" %f", &AreaKm2);

  printf ("Digite PIB: \n");
  scanf (" %f", &PIB2);

  printf ("Digite Quantos Pontos Turísticos tem: \n");
  scanf (" %d", &NumPontosTuristicos2);

  // Área para exibição dos dados da cidade
  // CARTA 1
    printf("\n\n CARTA 1 \n");
    printf("Estado: %2s\n", Estado1);
    printf("Codigo: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", AreaKm1);
    printf("PIB: %.2f bilhoes\n", PIB1);
    printf("Pontos turisticos: %d\n", NumPontosTuristicos1);

    // CARTA 1
    printf("\n\n CARTA 2 \n");
    printf("Estado: %2s\n", Estado2);
    printf("Codigo: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", AreaKm2);
    printf("PIB: %.2f bilhoes\n", PIB2);
    printf("Pontos turisticos: %d\n", NumPontosTuristicos2);

return 0;
} 
