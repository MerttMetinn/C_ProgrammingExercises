#include <stdio.h>
#include <stdlib.h>

double alan(double);
double cevre(double);

int main()
{
    double yaricap;

    printf("Dairenin yaricapini girin: ");
    scanf("%lf", &yaricap);

    printf("Dairenin alani: %.2lf\n", alan(yaricap));
    printf("Dairenin cevresi: %.2lf\n", cevre(yaricap));

    return 0;
}

double alan(double yaricap)
{
    return 3.14 * yaricap * yaricap;
}

double cevre(double yaricap)
{
    return 2 * 3.14 * yaricap;
}
