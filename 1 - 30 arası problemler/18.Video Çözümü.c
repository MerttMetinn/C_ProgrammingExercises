#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal, n=0;
    int binary[32];

    printf("Onluk tabandan bir sayi giriniz: ");
    scanf("%d", &decimal);

    while (decimal > 0)
    {
        binary[n++] = decimal % 2;
        decimal /= 2;
    }

    printf("Ikilik taban karsiligi: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", binary[i]);
    }

    printf("\n");

    return 0;
}
