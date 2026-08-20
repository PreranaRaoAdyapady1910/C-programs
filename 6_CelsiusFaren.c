#include<stdio.h>
int main(){
    float celsius;
    float farenheit;

    printf("Enter the temperature in degree celsius: ");
    scanf("%f",&celsius);

    farenheit = (celsius*9/5)+32;

    printf("Temperature in farenheit is: %f ",farenheit);
}