#include<stdio.h>
#include<stdbool.h>
int main(){
    int desiredNumber;
    printf("Enter a number of primes you want:");
    scanf("%d",&desiredNumber);

    int iterator=2;
    int primeNumberCount=0;
    

    while(primeNumberCount<desiredNumber){
        bool isPrime=true;
        for(int i=2;i<iterator;i++){
            if(iterator%i==0){
                isPrime=false;
                break;
            }
        }

        if(isPrime==true){
            primeNumberCount++;
            printf("%d\t",iterator);
        }
        iterator++;
    }
}


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//     bool isPrime= true;

//     for(int i=2;i<number;i++){
//         if(number%i==0){
//             isPrime= false;
//         }
//     }

//     if(isPrime==true){
//         printf("It is a prime number");
//     }
//     else{
//         printf("It is not a prime number");
//     }





    
// }








