#include <stdio.h>

int main(){
    int age0 = 0x19;
    int age1 = 25;
    printf("My age0 is %d stored at location %p\n", age0, &age0);
    printf("My age1 is %x stored at location %p\n", age1, &age1);
}