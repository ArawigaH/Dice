#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    char name[30];
    int d1,d2,i;
    int result;
    unsigned int t;
    
    t = time(NULL);
    srand(t);
    
    printf("What is your name?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s!\n",&name[0]);

    printf("Rolling the dice...\n");
    
    d1 = rand() % 6 + 1;
    for(i=0;i<rand()%6+1;i++){
    }
    printf("Die 1: %d\n",d1);
    
    d2 = rand() % 6 + 1;
    
    printf("Die 2: %d\n",d2);
    
    result = d1 + d2;
    
    printf("Total value: %d\n",result);

    if(result > 7){
      printf("%s won!\n",&name[0]);
    }
    
    else{
      printf("%s lost!\n",&name[0]);
    }
    
    return 0;
}

