#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,sayi;
    int tektoplam=0,cifttoplam=0;

    printf("Kac sayi girilecek: ");
    scanf("%d",&n);

    for(int i=0; i<n ;i++)
    {
        printf("Sayi: ");
        scanf("%d",&sayi);

        (sayi % 2 ==0) ? (cifttoplam +=sayi) : (tektoplam +=sayi);
    }

    printf("Teklerin Toplami: %d\nCiftlerin Toplami: %d",tektoplam,cifttoplam);
    return 0;
}
