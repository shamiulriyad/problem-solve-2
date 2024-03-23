#include<stdio.h>
int main ()
{
 int a,b,gcd,lcd,i=1;
 printf("Enter the numbers : ");
 scanf("%d %d", &a, &b);
 // Find the GCD  of the two numbers
 while(i<=a && i <=b)
 {
     if(a%i==0 && b%i==0)
     {
         gcd=i;//  GCD i
     }i++; // go to next
 }
 lcd=(a*b)/gcd;
  printf("GCD :%d \nLCD :%d", gcd,lcd);


return 0;
}