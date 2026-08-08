#include<stdio.h>

int main(){
    const float pi = 3.14;
    float radius;
    float area;
    printf("Enter the radius of a circle:");
    scanf("%f", &radius);

    area = pi*radius*radius;
    printf("The area of circle is: %f", area);

}