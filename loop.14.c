#include <stdio.h>

int fact(int z);

void main()
{
    int n, r, ncr;

    printf("\n Enter the value for N and R \n");
    scanf("%d%d", &n, &r);
    ncr = fact(n) / (fact(r) * fact(n - r)); // sutro 
    printf("\n The value of ncr is: %d", ncr);
}

    int fact(int z)
{
    int f = 1, i;
    if (z == 0) //If the input number z is 0, return 1 (since factorial of 0 is 1).
    {
        return(f);
    }
    else
         {
        for (i = 1; i <= z; i++)
	{
            f = f * i;
	}
    }
    return(f);
}