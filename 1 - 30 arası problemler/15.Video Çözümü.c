#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    scanf("%d",&sayi);

    int temp = sayi;
    int tersi = 0;

    while(temp != 0)
    {
        tersi *= 10;
        tersi += temp % 10;
        temp /= 10;
    }

    (tersi == sayi) ? (printf("%d sayisi palindromik bir sayidir ve tersi %d'dir",sayi,tersi)) : (printf("%d sayisi palindromik bir sayi degildir ve tersi %d'dir",sayi,tersi));


    return 0;
}
