#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    
  int d1,d2,i;
    unsigned int t;
    
    t = time(NULL);
    srand(t);
    
    d1 = rand()% 6 + 1;
    for(i=0;i<rand()%6+1;i++)
    d2 = rand()% 6 + 1;

    printf("%d %d\n",d1,d2);
    
    if((d1 + d2) > 7){
        printf("You won\n");
    }
    
    else{
        printf("You lost\n");
    }
    
    return 0;
}
