#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sayi, gecici, kalan, basamak_sayisi = 0, armstrong = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    gecici = sayi;

    while(gecici != 0)
    {
        basamak_sayisi++;
        gecici /= 10;
    }

    gecici = sayi;

    while(gecici != 0)
    {
        kalan = gecici % 10;
        armstrong += pow(kalan, basamak_sayisi);
        gecici /= 10;
    }

    if(armstrong == sayi)
    {
        printf("%d bir Armstrong sayisidir.", sayi);
    }
    else
    {
        printf("%d bir Armstrong sayisi degildir.", sayi);
    }

    return 0;
}
