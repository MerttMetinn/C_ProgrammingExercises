#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

void alan_hesapla(float r)
{
    float alan = 4*pi*r*r;
    printf("\nAlan: %.2f",alan);
}

void hacim_hesapla(float r)
{
    float hacim = (4/3)*(pi)*r*r*r;
    printf("\nHacim: %.2f",hacim);
}

int main()
{
    float r;

    printf("Kuremizin yaricapini girin: ",r);
    scanf("%f",&r);

    alan_hesapla(r);
    hacim_hesapla(r);
    return 0;
}
