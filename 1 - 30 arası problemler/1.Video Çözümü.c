#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int toplam=0;

    for(int i=0; i<=100 ; i++)
    {
        toplam +=i;
    }
    printf("%d",toplam);
    return 0;
}
