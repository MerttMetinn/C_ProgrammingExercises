#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dizi[] = {100,65,84,13,284,41,20,7};
    int length = sizeof(dizi) / sizeof(dizi[0]);
    int temp;

    for(int i=0 ; i<length-1 ; i++)
    {
        for(int j=0 ; j < length-i-1 ;j++)
        {
            if(dizi[j] > dizi[j+1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
        }
    }

    for(int i=0 ; i<length ; i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0;
}
