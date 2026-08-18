#include<stdio.h>
int main(){
    char ch;
    printf("Enter character/integer:");
    scanf("%c",&ch);

    if(ch>'0' && ch<'9'){
        printf("It is a integer");
    }
    else{
        printf("It is a character");
    }
}