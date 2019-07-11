#include<stdio.h>

int main(){
    
    char name[10];
    
    printf("What is your name?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s\n",&name[0]);
    
    return 0;
}
