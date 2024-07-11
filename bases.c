#include <stdio.h>

int main(){
    int age00 = 0x19;
    int age01 = 25;
    printf("My age0 is %d stored at location %p\n", age00, &age00);
    printf("My age1 is %x stored at location %p\n", age01, &age01);
}