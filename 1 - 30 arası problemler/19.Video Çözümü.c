#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;

  printf("Kenar a'nin uzunlugunu girin: ");
  scanf("%lf", &a);

  printf("Kenar b'nin uzunlugunu girin: ");
  scanf("%lf", &b);

  c = sqrt(a*a + b*b);

  printf("Hipotenusun uzunlugu %.2lf\n", c);

  return 0;
}
