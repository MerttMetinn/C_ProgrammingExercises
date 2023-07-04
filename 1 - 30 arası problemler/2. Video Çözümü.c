#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1,num2,num3,max,min;
    scanf("%d%d%d",&num1,&num2,&num3);

    max = ((num1>num2)&&(num1>num3)) ? num1 : ((num2>num3) ? num2 : num3);
    min = ((num1<num2)&&(num1<num3)) ? num1 : ((num2<num3) ? num2 : num3);

    printf("MAX: %d\nMIN: %d",max,min);

    return 0;
}
