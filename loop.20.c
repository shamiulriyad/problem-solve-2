#include<stdio.h>

int main() 
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    int sum = 0, term = 0;
    // Loop  terms and calculate sum
    for (int i = 1; i <= n; i++) {
        term = term * 10 + i; //the next digit to the term
        sum += term; // Add the term to the sum
    }
    printf("%d",sum);
    return 0;
}