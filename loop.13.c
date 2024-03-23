#include<stdio.h>

int main()
{
    int i, fact=1, n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){    //i value 1 and check n is less then or equal and go to fact and i*fact and print the fact
        fact = fact*i;
    }
    printf("%d\n",fact);

    return 0;

}