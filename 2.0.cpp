#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int num =1;
    for(int i=0;i<N;i++){           // printing series nth turm incrementing 5
        printf("%d\n",num);
        if(i!= N-1){
            printf("");
        }
      num+=5;
    }

    return 0;
}
