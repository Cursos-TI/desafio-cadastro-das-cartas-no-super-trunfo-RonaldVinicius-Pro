#include <stdio.h>
#include <string.h>

#define NUM_CARTAS 5

// Definição da estrutura de uma carta
typedef struct {
    char estado[50];
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("==========================\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nome_cidade);
    printf("População: %d\n", c.populacao);
    printf("Área (km²): %.2f\n", c.area);
    printf("PIB (em bilhões): %.2f\n", c.pib);
    printf("Número de pontos turísticos: %d\n", c.pontos_turisticos);
    printf("==========================\n");
}

// Função principal
int main() {


    // Definindo as cartas
    Carta cartas[NUM_CARTAS] = {
        {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699.28, 15},
        {"Rio de Janeiro", "RJ02", "Rio de Janeiro", 6748000, 1182.30, 361.14, 20},
        {"Minas Gerais", "MG03", "Belo Horizonte", 2527000, 331.40, 85.89, 10},
        {"Bahia", "BA04", "Salvador", 2886698, 693.83, 63.33, 12},
        {"Paraná", "PR05", "Curitiba", 1963726, 435.00, 94.16, 8}
 };
    
         // Exibindo todas as cartas
    printf("Bem-vindo ao jogo Super Trunfo: Países!\n\n");

    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("Carta %d:\n", i + 1);
        exibirCarta(cartas[i]);
    }                         
    
    return 0;
}
