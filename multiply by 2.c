#include <stdio.h>

int main(){
    int number;
    int ans;
    printf("Enter any integer: ");
    scanf("%i", &number);
    ans = number * 2;
    printf("%d x 2 = %d\n", number, ans);
}