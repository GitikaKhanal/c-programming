#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum = 0;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n); //x float ko ra n int ko vayera ho
    for (int i = 0; i <= n; i++) { 
        sum = sum + 1 / pow(x, i); //0 + 1/pow(5,0)
    }
    printf("Sum of series: %.2f\n", sum);
    return 0;
}