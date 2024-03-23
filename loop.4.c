#include<stdio.h>

int main()
{
    int N, i;
    float avg, sum = 0.0, num;
    printf("Enter the number of numbers: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1); // num 1 +
        scanf("%f", &num);  //input sum
        sum += num;
    }

    avg = sum / N;// condition for avg
    printf("Average of %d numbers: %.6f\n", N, avg);  // print avg

    return 0;
}

