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

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  

  printf ("Desafio Super Trunfo - Países!\n");

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

// RESPOSTAS CARTA 1
    printf("\n\n CARTA 1 \n");
    printf("Estado: %2s\n", Estado1);
    printf("Codigo: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", AreaKm1);
    printf("PIB: %.2f bilhoes\n", PIB1);
    printf("Pontos turisticos: %d\n", NumPontosTuristicos1);


return 0;
} 
