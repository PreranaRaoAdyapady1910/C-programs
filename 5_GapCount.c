#include<stdio.h>
int main(){
    char ch1, ch2;
    int count;

    printf("Enter the first and second letter\n");
    scanf("%c %c", &ch1, &ch2);

    count = ch2-ch1-1;
    printf("The numbers of characters between %c and %c is: %d\n",ch1,ch2,count);

    printf("The middle characters are: ");
    for(int i=ch1+1; i<ch2;i++){
        printf("%c ",i);
    }
    
}