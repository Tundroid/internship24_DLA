#include <stdio.h>
#include <limits.h>

int main(){
    printf("MIN SHORT SIGNED: %d\n", SHRT_MIN);
    printf("MAX SHORT SIGNED: %d\n", SHRT_MAX);
    printf("MIN SHORT UNSIGNED: %d\n", 0);
    printf("MAX SHORT UNSIGNED: %d\n", USHRT_MAX);
    printf("MIN INT SIGNED: %d\n", INT_MIN);
    printf("MAX INT SIGNED: %d\n", INT_MAX);
    printf("MIN INT UNSIGNED: %d\n", 0);
    printf("MAX INT UNSIGNED: %d\n", UINT_MAX);
}