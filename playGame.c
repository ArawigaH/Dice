#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
  int d1,d2,i;
    int result;
    unsigned int t;
    
    t = time(NULL);
    srand(t);
    
    printf("Rolling the dice...\n");
    
    d1 = rand() % 6 + 1;
    for(i=0;i<rand()%6+1;i++){
    }
    printf("Die 1: %d\n",d1);
    
    d2 = rand() % 6 + 1;
    
    printf("Die 2: %d\n",d2);
    
    result = d1 + d2;
    
    printf("Total value: %d\n",result);
    
    return 0;
}

