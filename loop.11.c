#include<stdio.h>

int main()
{
    int n;
    int sum ,term;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
         term = (i * i);// Calculate the term (i^i)
        sum += (i+1) * term;// Add the term to the sum
    }
    printf("Result: %d\n", sum);
    return 0;
}

