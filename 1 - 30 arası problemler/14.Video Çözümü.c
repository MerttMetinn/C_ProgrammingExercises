#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    scanf("%d",&sayi);
    int max = sayi % 10;
    int asil = sayi;

    while(sayi >= 10)
    {
        sayi /= 10;
        if((sayi%10) > max)
        {
            max = sayi%10;
        }
    }
    printf("%d sayisindaki en buyuk rakam %d",asil,max);
    return 0;
}

//Farklı bir çözüm
//int main()
//{
//    char str[100];
//    fgets(str, 100, stdin);
//    int ara = atoi(str);
//    int en_buyuk = ara % 10;
//
//    while(ara >= 10)
//    {
//        ara /= 10;
//        if((ara % 10) > en_buyuk)
//        {
//            en_buyuk = ara % 10;
//        }
//    }
//    printf("%d sayisindaki en buyuk rakam %d", atoi(str),en_buyuk);
//    return 0;
//}

