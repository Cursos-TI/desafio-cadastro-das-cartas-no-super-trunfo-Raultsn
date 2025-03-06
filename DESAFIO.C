#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    char estado = 'A'; // Um único caractere deve conter aspas simples e terminar com ponto e vírgula
    char codigo[] = "E01"; // String deve estar entre aspas duplas e terminar com ponto e vírgula
    char Nome[] = "Rio de Janeiro"; // String também deve estar entre aspas duplas
    int populacao = 250000; // Número inteiro sem ponto e com ponto e vírgula no final
    float area = 2500.000; // Número de ponto flutuante está correto
    float PIB = 5.0; // Número de ponto flutuante está correto
    int NPT = 10; // Número inteiro correto

    // Impressão das variáveis
    printf("Estado é: %c\n", estado);
    printf("Código é: %s\n", codigo);
    printf("Nome é: %s\n", Nome); 
    printf("População é: %d\n", populacao);
    printf("Área é: %.2f\n", area); // %d foi substituído por %.2f, pois 'area' é float
    printf("PIB é: %.1f\n", PIB); // %.1f para limitar casas decimais
    printf("NPT é: %d\n", NPT); // Número de Pontos Turísticos

    return 0;
}

