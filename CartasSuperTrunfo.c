#include <stdio.h>
// Desafio Nível Novato

// variáveis para a carta 1
int main(){
int populacao, pontoTur;
float area, pib;
char codigo[10] = "A01";
char estado[50];
char cidade[50];

// área para entrada de dados da carta 1
printf("Carta 1: \n");
printf("Digite o estado : \n ");
scanf("%s", estado);

printf("Digite o código : \n ");
scanf("%s", codigo);

printf("Digite o nome da cidade : \n");
scanf("%s", cidade);

printf("Digite o tamanho da população : \n");
scanf("%d", &populacao);

printf("Digite o número de pontos turísticos : \n");
scanf("%d", &pontoTur);

printf("Digite a area em km² : \n");
scanf("%f", &area);

printf("Digite o Pib : \n");
scanf("%f", &pib);


// imprimir os dados da carta 1
printf("Carta 1: \n");
printf("Estado:%s\n", estado);
printf("Código:%s\n", codigo);
printf("Cidade:%s\n", cidade);
printf("População:%d\n", populacao);
printf("Pontos Turísticos:%d\n", pontoTur);
printf("Área:%f km²\n", area);
printf("PIB:%f\n", pib);


// variáveis para a carta 2
int populacao2, pontotur2;
float area2, pib2;
char codigo2[10] = "A02";
char estado2 [50];
char cidade2 [50];


// área para entrada de dados da carta 2
printf("Carta 2: \n");
printf("Digite o estado : \n ");
scanf("%s", estado2);

printf("Digite o código : \n ");
scanf("%s", &codigo2);

printf("Digite o nome da cidade : \n");
scanf("%s", cidade2);

printf("Digite o tamanho da população : \n");
scanf("%d", &populacao2);

printf("Digite o número de pontos turísticos : \n");
scanf("%d", &pontotur2);

printf("Digite a area em km² : \n");
scanf("%f", &area2);

printf("Digite o Pib : \n");
scanf("%f", &pib2);


// imprimir os dados da carta 2
printf("Carta 2: \n");
printf("Estado:%s\n", estado2);
printf("Código:%s\n", codigo2);
printf("Cidade:%s\n", cidade2);
printf("População:%d\n", populacao2);
printf("Pontos Turísticos:%d\n", pontotur2);
printf("Área:%f km²\n", area2);
printf("PIB:%f\n", pib2);





    

    return 0;
    

}