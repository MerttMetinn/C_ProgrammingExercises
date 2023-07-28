#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[100];
    gets(cumle);

    for(int i=strlen(cumle)-1 ; i>=0 ; i--)
    {
        printf("%c",cumle[i]);
    }
    return 0;
}
