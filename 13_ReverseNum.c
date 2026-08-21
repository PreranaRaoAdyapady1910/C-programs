#include<stdio.h>
int main(){

    int number;
    int remainder;
    int reversedNumber=0;
    printf("Enter the number:");
    scanf("%d",&number);
//12345
    while(number!=0){
        remainder = number%10;
        number = number/10;
        reversedNumber = (reversedNumber*10)+remainder;
    }
    printf("The reversed number is: %d",reversedNumber);

}