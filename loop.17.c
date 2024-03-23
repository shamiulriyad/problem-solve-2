#include<stdio.h>

int main() 
{
    int n, i, flag = 0;
    scanf("%d", &n);
     // Loop to check for factors of 'n'
    for (i = 2; i <= n/2; ++i) {
      if (n % i == 0) {
        flag = 1;
        break;
      }
    }
 // Check if the number is 1
    if (n == 1) {
      printf("Not prime");
    }
    else {
      // If flag is 0, number is prime;or, it's not prime
      if (flag == 0){
        printf("Prime\n");
      }      
      else{
        printf("Not prime\n");
      }        
    }
    return 0;
}