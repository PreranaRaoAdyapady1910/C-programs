#include<stdio.h>
#include<ctype.h>
int main(){
    char word[50]; 
    
    printf("Enter the word:");
    scanf("%s", &word);
    printf("The entered word is %s\n", word);
    for(int i=0;word[i]!='\0';i++){
        word[i] = toupper(word[i]);
        
    }
    printf("The uppercase converted word is:%s\n", word);
    for(int i=0;word[i]!='\0';i++){
        word[i]=tolower(word[i]);
    }
    printf("The lowercase converted word is:%s", word);
}