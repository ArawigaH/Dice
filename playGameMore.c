#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MinDice(int);

int main(){
    

    char name[30];
    int i,diceNum,d;
    int result=0;
    unsigned int t;
    
    t = time(NULL);
    srand(t);
    
    printf("What is your name?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s!\n",&name[0]);

printf("How many dice?\n");
scanf("%d",&diceNum);

    printf("Rolling the dice...\n");
    
    for(i=1;i<=diceNum;i++){
     d = rand()%6+1;	
     printf("Die %d: %d\n",i,d);
     result = result + d;
} 
    
    printf("Total value: %d\n",result);

    if(result > MinDice(diceNum)){
      printf("%s won!\n",&name[0]);
    }
    
    else{
      printf("%s lost!\n",&name[0]);
    }
    
    return 0;
}

int MinDice(int dN){
 int i;
 int result=0;
for(i=1;i<=dN;i++){
if((i%2) == 0) result = result + 4;
else result = result + 3;
}

return result;
}


