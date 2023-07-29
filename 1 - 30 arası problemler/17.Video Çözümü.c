#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int s1,s2,toplam;

    printf("Sayi 1: ");
    scanf("%d",&s1);

    printf("Sayi 2: ");
    scanf("%d",&s2);

    int *p1,*p2;

    p1 = &s1;
    p2 = &s2;

    toplam = *p1 + *p2;

    printf("Sonuc: %d",toplam);

    return 0;
}
