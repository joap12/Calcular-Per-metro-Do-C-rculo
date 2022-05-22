#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include <locale.h>
// #define PI = 3.1415

int main(){
    float raio;
    float perim;
    float PI = 3.1415;

    printf("\n Qual a medida do raio? ");
    printf(" Digite o raio a seguir: ");
    scanf("%f", &raio);

    perim = 2*PI*raio;

    printf("\n O perímetro do círculo de raio %.2f é %.2f", raio, perim);

    getch();
}