#include <stdio.h>

int main(){
    const double PI = 3.14;
    double radius, area;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Area of circle with radius %-10.2lf = %-10.2lf\n", radius, area);
    return 0;
}