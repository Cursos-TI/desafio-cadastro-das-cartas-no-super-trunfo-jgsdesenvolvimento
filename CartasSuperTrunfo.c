#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  
    char estado;
    char codigodacarta[5];
    char nomedacidade [50];
    int populacao,pontosturisticos;
    float area,pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("---- Cadastro de Cartas Super Trunfo Cidades ---- \n\n");
    printf("Escolha uma letra entre A ate H para iniciar: \n");
    scanf("%c",&estado);
    printf("Escolha um número entre 1 a 4: \n");
    scanf("%s",&codigodacarta);
    printf("Informe o nome da cidade: \n");
    scanf("%s",nomedacidade);
    printf("Informe a quantidade de habitantes: \n");
    scanf("%d",&populacao);
    printf("Informe a área em Km²: \n");
    scanf("%f",&area);
    printf("Informe o PIB: \n");
    scanf("%f",&pib);
    printf("Qual é a quantidade de pontos turisticas desta cidade? \n");
    scanf("%d",&pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.*/

    //* printf("Carta: %c%s",estado,codigodacarta);

return 0;
}
