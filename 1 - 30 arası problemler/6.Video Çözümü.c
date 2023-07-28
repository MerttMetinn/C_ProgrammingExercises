#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    int kr = 0;
    fgets(dizi,100,stdin);
    int uzunluk = strlen(dizi);

    if (dizi[uzunluk-1] == '\n')
    {
        dizi[uzunluk-1] = '\0';
        uzunluk--;
    }

    for(int i=0; dizi[i] != '\0' ; i++)
    {
        kr++;
    }

    printf("fgets ile alinca : %d\n",kr);

    char cumle[100];
    gets(cumle);
    int adet = 0;

    for(int i= 0; cumle[i] != '\0'; i++)
    {
        adet++;
    }
    printf("gets ile alinca : %d\n",adet);

    printf("NOT: Fgets ile alma isleminde alinan ifade sonuna '\\n' eklendiginden dolayi onu '\\0' ile degistirip karakter sayisini dogru hesapliyoruz");
    return 0;
}
