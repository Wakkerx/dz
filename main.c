#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	char* tmp;
	float a = strtof(argv[1], &tmp);
	if (*tmp) {
		return 0;
	}
	float b = strtof(argv[2], &tmp);
	if (*tmp) {
		return 0;
	}
	float c = strtof(argv[3], &tmp);
	if (*tmp) {
		return 0;
	}
	float D = pow(b, 2) - 4 * a * c;
	if (D == 0) {
		float x = -b / (2 * a);
		printf("\n Root x=%lf", x);
		return 0;
	}
	if (D > 0) {
		float x1 = (-b + sqrt(D, 2)) / (2 * a);
		float x2 = (-b - sqrt(D, 2)) / (2 * a);
		printf("First root x1=%lf\n",x1);
		printf("Second root x2=%lf\n",x2);
		return 0;
	}
	else {
		printf("No Root");
		return 1;
	}
	return 0;
}