#include <stdio.h>
int main() {

    char estado = 'A'; // Caracter único aspas simples 
    char codigo[] = "E01"; // Mais de um caracter aspas duplas 
    char Nome[] = "Rio de Janeiro"; // Mais de um caracter aspas duplas 
    int populacao = 2500000; 
    float area = 2500.000; 
    float PIB = 50000000; 
    int NPT = 15; // NPT = Número de Pontos Turísticos

    // Impressão das variáveis
    printf("Estado é: %c\n", estado);
    printf("Código é: %s\n", codigo);
    printf("Nome é: %s\n", Nome); 
    printf("População é: %d\n", populacao);
    printf("Área é: %.2f\n", area); // %.2f para melhor vizualização
    printf("PIB é: %.1f\n", PIB); 
    printf("NPT é: %d\n", NPT); // NPT = Número de Pontos Turísticos
   
    
    char estado2 = 'B'; 
    char codigo2[] = "E02";
    char Nome2[] = "São Vicente "; 
    int populacao2 = 100000;
    float area2 = 3500.000; 
    float PIB2 = 30000000; 
    int NPT2 = 20; 
  

    printf("Estado é: %c\n", estado2);
    printf("Código é: %s\n", codigo2);
    printf("Nome é: %s\n", Nome2); 
    printf("População é: %d\n", populacao2);
    printf("Área é: %.2f\n", area2); // %.2f para melhor vizualização 
    printf("PIB é: %.1f\n", PIB2); 
    printf("NPT é: %d\n", NPT2); // NPT = Número de Pontos Turísticos



    return 0;
}
