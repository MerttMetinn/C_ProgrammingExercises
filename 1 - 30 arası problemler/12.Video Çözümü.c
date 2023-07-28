#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float hesapla(int n1, int n2)
{
    return (n1*0.4 + n2*0.6);
}
int main()
{
    printf("Vize notu :");
    int vize;
    scanf("%d",&vize);

    printf("Final notu :");
    int final;
    scanf("%d",&final);

    ((final < 40) ? printf("Final notunuz cok dusuk, Kaldiniz") : ((hesapla(vize,final) < 50) ? (printf("Ortalamaniz %.2f, Kaldiniz",hesapla(vize,final))) : (printf("Ortalamaniz %.2f, Gectiniz",hesapla(vize,final)))));

    return 0;
}
