#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Enter three values (t1, t2, t3): ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    double total_time = 1 / (1/t1 + 1/t2 + 1/t3);
    printf("Time required to eat the pie: %.2f hours\n", total_time);
    
    return 0;
}