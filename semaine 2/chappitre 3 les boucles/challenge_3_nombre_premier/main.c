#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 3 : nomber premier      ~~~~  ~~~~~~~~~~~~~~~~~\n\n");



     int number;





     printf("enter a number : ");

     scanf("%d" , &number);




     if(number == 0){
        printf("We usually restrict the terms prime and composite to positive integers");
        exit(0);
     }





    int is_prime = 1;

    for(int i=2 ; i<= (number/2) ; i++){
        if(number%i == 0){
            is_prime = 0;
            break;
        }
    }




    if(is_prime)
        printf("%d   is prime"  , number);

    else
        printf("%d   is not prime" , number);




}
