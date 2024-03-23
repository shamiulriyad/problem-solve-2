#include<stdio.h>

int main()
{
    int num, swip_num = 0;
    scanf("%d", &num);
     // Loop to reverse the number
    while (num != 0) {
      int digit = num % 10;
      swip_num = swip_num * 10 + digit;
      num /= 10;  // Remove the last  number
    }
    printf("%d\n", swip_num); // Print the swip number
    return 0;
}
