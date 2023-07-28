#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch;
    int adet;
    printf("Bir karakter giriniz :");
    scanf("%c",&ch);
    printf("Kac kere ekrana basilsin? :");
    scanf("%d",&adet);

    for(int i=0; i<adet;i++)
    {
        printf("%c ",ch);
    }
    return 0;
}
