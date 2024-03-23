#include<stdio.h>

int main()
{
    int n,b=0,r,temp;
    printf("enter the number : ");
    scanf("%d",&n);
    temp = n;
    while(n!=0)
    {
    r=n%10;             //  r=n mod 10
    b=b*10+r;
    n=n/10; // Remove the last digit from 'n'
    }
    if(temp==b){
    printf("\n palindrome number ");
    }
    else
    printf("\n not palindrome number ");

}