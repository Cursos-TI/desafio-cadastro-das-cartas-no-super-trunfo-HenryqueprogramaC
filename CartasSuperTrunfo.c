#include <stdio.h>

int main(){
    char codecity[20];
    int populacao;
    int area;
    int pib;
    int numpt;
   
 
    char codecity2[20];
    int populacao2;
    int area2;
    int pib2;
    int numpt2;
 
    printf("Diga o codigo da sua cidade :\n");
    scanf("%19s", codecity);
    
 
    printf("Diga a população da sua cidade :\n");
    scanf("%d", &populacao);
   
 
    printf("Diga a area da sua cidade :\n");
    scanf("%d", &area);
    
 
    printf("Diga o pib da sua cidade :\n");
    scanf("%d", &pib);
   
 
    printf("Diga o numero de pontos turisticos da sua cidade :\n");
    scanf("%d", &numpt);
 
    int densidade = populacao / area;
    int pibpercapita = pib / populacao;
    
    printf("Densidade populacional: %d\n", densidade);
    
    printf("Pib per capita :%d\n", pibpercapita);
 
 
    printf("Diga o codigo da sua cidade :\n");
    scanf("%19s", codecity2);
    
 
    printf("Diga a população da sua cidade :\n");
    scanf("%d", &populacao2);
   
 
    printf("Diga a area da sua cidade :\n");
    scanf("%d", &area2);
    
 
    printf("Diga o pib da sua cidade :\n");
    scanf("%d", &pib2);
   
 
    printf("Diga o numero de pontos turisticos da sua cidade :\n");
    scanf("%d", &numpt2);
     
    int densidade2 = populacao2 / area2;
    int pibpercapita2 = pib2 / populacao2;
 
    printf("Densidade populacional: %d\n", densidade2);
    
    printf("Pib per capita: %d\n", pibpercapita2);
    
    printf("População da 1° cidade é maior que a da segunda?: %d\n", populacao > populacao2);
    printf("Area da 1° cidade é maior que a da segunda?: %d\n", area > area2);
    printf("Pib da 1° cidade é maior que a da segunda?: %d\n", pib > pib2);
    printf("Número de pontos turisticos da 1° cidade é maior que a da segunda?: %d\n", numpt > numpt2);
    printf("Densidade populacional da 1° cidade é maior que a da segunda?: %d\n", densidade < densidade2);
    printf("Pib per capita da 1° cidade é maior que a da segunda?: %d\n", pibpercapita > pibpercapita2);
    
    return 0;
 }