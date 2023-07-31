#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ilk_sayi,son_sayi;
    printf("Ilk sayi :");
    scanf("%d",&ilk_sayi);

    printf("Son sayi :");
    scanf("%d",&son_sayi);

    int kontrol = 0;

    for(int i=ilk_sayi; i<son_sayi ; i++)
    {
        for(int j=2; j<i ; j++)
        {
            if(i % j == 0)
            {
                kontrol++;
            }
        }
        if(kontrol == 0)
        {
            printf("%d\n",i);
        }
        kontrol = 0;
    }
    return 0;
}
