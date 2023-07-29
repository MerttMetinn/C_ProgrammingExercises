#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi = 0,toplam =0,i=0;

    for(i; !(sayi < 0) ; i++)
    {
        toplam += sayi;
        scanf("%d",&sayi);
    }

    printf("\nToplam %d adet sayi girildi\nBu sayilarin toplami %d\nOrtalamasi %.2f\n",i-1,toplam,(float)(toplam / (i-1)));
    return 0;
}
