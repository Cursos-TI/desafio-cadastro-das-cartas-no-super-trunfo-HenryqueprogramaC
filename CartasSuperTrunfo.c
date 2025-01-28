#include <stdio.h>



int main() {
    char codestado;
    char nome[50];
    float populacao;
    double area;
    int pib;
    float pt;

    printf("Diga o codigo do seu estado:  \n");
    scanf( "%c", &codestado);
    getchar();

    printf("Diga o nome da sua ciade:  \n");
    scanf("%s", nome);
    getchar();

    printf("Diga a população da sua cidade:  \n");
    scanf( "%f", &populacao);
    getchar();

    printf("Diga a area da sua cidade:  \n");
    scanf("%lf", &area);
    getchar();

    printf("Diga o pib da sua cidade:  \n");
    scanf("%d", &pib);

    getchar();

    printf("Diga a quantidades de pontos turisticos da sua ciadede:  \n");
    scanf("%f", &pt);

    getchar();

    printf("Otimo!!, sua cidade tem: Nome: %s População: %f Area: %lf PIB: %d Pontos turisticos: %f", codestado, nome, populacao, area, pib, pt);


















    return 0;
}
