#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* cumle = malloc(100 * sizeof(char));
    fgets(cumle, 100, stdin);

    char* bas_harfler = malloc(100 * sizeof(char));
    int index = 0;

    printf("Girilen Cumle: %s\n", cumle);

    if (cumle[0] != ' ')
    {
        bas_harfler[index] = cumle[0];
        index++;
    }

    for (int i = 0; i < strlen(cumle); i++)
    {
        if (cumle[i] == ' ' && cumle[i+1] != ' ')
        {
            bas_harfler[index] = cumle[i+1];
            index++;
        }
    }

    bas_harfler[index] = '\0';

    printf("Kelimelerin bas harfleri: %s\n", bas_harfler);

    free(cumle);
    free(bas_harfler);
    return 0;
}
