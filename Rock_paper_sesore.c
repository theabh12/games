#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
        srand(time(0));
    int player,computer= rand() % 3;
    // 0 --> rock
    // 1 --> paper
    // 2 --> scissors  
    printf("Choose 0 for Rock, 1 for Paper and 2 for Scissors \n");
    scanf("%d",&player);
    printf("computer choose %d \n",computer);

    if (player ==0 && computer== 0)
    {
        printf("Draw! \n");
        
    }
    else if(player ==0 && computer== 1)
    {
        printf("Computer Won! \n");
        
    }
    else if(player ==0 && computer== 2)
    {
        printf("You Won! \n");
        
    }
    else if(player ==1 && computer== 0)
    {
        printf("You Won! \n");
        
    }
    else if(player ==1 && computer== 1)
    {
        printf("Draw! \n");
        
    }
    else if(player ==1 && computer== 2)
    {
        printf("Computer Won! \n");
        
    }
    else if(player ==2 && computer== 0)
    {
        printf("Computer Won! \n");
        
    }
    else if(player ==2 && computer== 1)
    {
        printf("You Won! \n");
        
    }
    else if(player ==2 && computer== 2)
    {
        printf("Draw! \n");
        
    }
    // else if(player ==0 && computer== 1)
    // {
    //     printf("Computer Won! \n");
        
    
    else{
        printf("Something went wrong! Try Choosing only between 0, 1 and 2 \n");
        
    }
    return 0;
}
