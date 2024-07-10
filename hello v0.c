#include <stdio.h>

int main(){
    char name[10];
    printf("Welcome, what is your name? ");
    scanf("%s", name);
    printf("Welcome, %s", name);
    return 0;
}