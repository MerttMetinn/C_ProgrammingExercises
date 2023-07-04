#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char metin[100];
    char ch;
    int adet=0;

    printf("Cumleniz: ");
    gets(metin);

    printf("Aranan harf: ",ch);
    scanf("%c",&ch);

    for(int i=0; metin[i] != '\0' ;i++)
    {
        if(metin[i] == ch)
        {
            adet++;
        }
    }

    printf("%c harfinden %d adet var",ch,adet);
    return 0;
}
