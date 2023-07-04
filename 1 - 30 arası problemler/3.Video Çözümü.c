#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int sayi1;
    printf("Sayi1: ");
    scanf("%d",&sayi1);

    while(getchar() != '\n');

    char islem;
    printf("Yapilacak matematiksel islem (+,-,*,/): ");
    scanf("%c",&islem);

    while(getchar() != '\n');

    int sayi2;
    printf("Sayi2: ");
    scanf("%d",&sayi2);

    switch(islem)
    {
    case '+':
        printf("Toplama islemi yapiliyor...\n");
        sleep(1);
        printf("%d + %d = %d",sayi1,sayi2,sayi1+sayi2);
        break;
    case '-':
        printf("Cikarma islemi yapiliyor...\n");
        sleep(1);
        printf("%d - %d = %d",sayi1,sayi2,sayi1-sayi2);
        break;
    case '*':
        printf("Carpma islemi yapiliyor...\n");
        sleep(1);
        printf("%d * %d = %d",sayi1,sayi2,sayi1*sayi2);
        break;
    case '/':
        printf("Bolme islemi yapiliyor...\n");
        sleep(1);
        printf("%d / %d = %d",sayi1,sayi2,sayi1/sayi2);
        break;
    default:
        printf("Hatali giris yaptiniz");
        break;
    }

    return 0;
}
