#include <stdio.h>
#include <math.h>
int main() {
  float a1,a2,x;
  printf("Enter x:");
  scanf("%f",&x);
    a1=exp(-abs(x))*cos(x);
    a2=exp(-abs(x))*sin(x);
    
printf ("\nf(x)=%f",a1);
printf ("\ng(x)=%f",a2);
  return 0;
}
