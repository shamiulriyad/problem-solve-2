#include<stdio.h>

#include<math.h>

int main()
{
    double x, term, sum = 0;
    int sign = 1, fact = 1;
    scanf("%lf", &x);
    for (int i = 1; i <= 15; i += 2) {
      // Calculate each term of the series
      term = sign * pow(x, i) / fact;
      // Add the term to the sum
      sum += term;
       // sign for the next term
      sign *= -1;
       // Update the value of factorial for the next term
      fact *= (i+1) * (i+2);
    }
    printf("%.3lf\n", sum);
    return 0;
}
