#include <stdio.h>
#include <math.h>
void func(int x){
	float a1=0;
	float a2=0;
	a1=exp(-abs(x))*cos(x);
    a2=exp(-abs(x))*sin(x);
    printf ("\nf(x)=%f",a1);
    printf ("\ng(x)=%f",a2);
}
