 #include<stdio.h>
int main()
{
      char input;
      int n=1;
      while (1){  //infinite loop
        scanf(" %c", &input);
        if(input == 'A') {
          break;
        }
        printf("Input %d: %c\n", n,input);
        n++;
      }
     return 0;
}