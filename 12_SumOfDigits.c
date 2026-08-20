#include<stdio.h>
int main(){

    int number;
    int remainder;
    int sum=0;
    


    printf("Enter a five digit number: ");
    scanf("%d",&number);

    //12345

    while(number!=0){
        remainder = number%10;
        sum = sum+remainder;
        number = number/10;
    }
    printf("%d", sum);
} 