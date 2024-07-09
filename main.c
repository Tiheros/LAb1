#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Enter three values: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double total = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double time_total = 1.0 / total;
    printf("Time: %.2f hours\n", time_total);
    
    return 0;
}