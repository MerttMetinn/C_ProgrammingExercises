#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10];
    int toplam = 0;
    srand(time(NULL));

    for(int i=0; i<10 ; i++)
    {
        dizi[i] = rand() % 100;
        toplam += dizi[i];
    }

    for(int i=0; i<10 ; i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\nToplam :%d",toplam);
    return 0;
}
