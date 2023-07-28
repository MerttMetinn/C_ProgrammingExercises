#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dizi[] = {100,65,84,13,284,41,20,7};
    int length = sizeof(dizi) / sizeof(dizi[0]);
    int max = dizi[0];
    int min = dizi[0];

    for(int i=0 ; i<length ; i++)
    {
       if(max > dizi[i])
       {
           max = dizi[i];
       }

       if(min < dizi[i])
       {
           min = dizi[i];
       }
    }

    printf("max:%d\nmin:%d",max,min);

    return 0;
}
