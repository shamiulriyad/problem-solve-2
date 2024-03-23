#include<stdio.h>
    
int main()
{
      int guess,num,time;
      scanf("%d",&num);
      scanf("%d",&time);
      for(int i = 0; i < time; i++) { 
        scanf("%d", &guess);  // input guess
        if(guess == num) {
            printf("Right, Player-2 wins!\n"); // Print "Right, Player-2 wins!" and end the game
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", time-i-1); // If the guess is wrong, print the remaining number of tries
        }
      }
      if(guess != num) // If all the guess is still wrong
      {
         printf("Player-1 wins!\n");
      }
    return 0;
}

