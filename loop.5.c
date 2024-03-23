#include<stdio.h>

int main()
{
    int X,Y;
    printf("enter the two number :");
    scanf("%d%d",&X,&Y);
    //condition  for x<y
    if(X<Y){
        for(int i=X;i<=Y;i++){
             printf("%d",i*i);
        }
       printf("Reached!\n");
       //condition for x>y
    }else if (X>Y){
         for(int i=X;i>=Y;i--){
             printf("%d",i*i);
        }
       printf("Reached!\n");
    }
    else{
        printf(" Reached!\n ");
    }
    
    
   return 0; 

}