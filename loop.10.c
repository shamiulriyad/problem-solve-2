#include<stdio.h>

int main() 
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
      if (i % 2 == 0) {   //i ke 2 dara vag kore jodi 0 hoi tahole sum er thake i -
          sum -= i;
      } 
      else {
         sum += i; // else plus
      }
    }
     printf("Result: %d\n", sum);
     return 0;
}