#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Dizinin eleman sayisi? :");
    scanf("%d", &n);

    int *dizi = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("Dizi[%d]:", i);
        scanf("%d", &dizi[i]);
    }

    int max = dizi[0];

    for(int i = 0; i < n; i++)
    {
        if(dizi[i] > max)
        {
            max = dizi[i];
        }
    }
    printf("Dizin en buyuk elemani :%d",max);
    free(dizi);
    return 0;
}
