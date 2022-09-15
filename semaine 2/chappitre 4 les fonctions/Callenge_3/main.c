#include <stdio.h>
#include <stdlib.h>



typedef Bool;
#define true 1
#define false 0



Bool is_prime(int number);


int main()
{

    int number;

    printf("enter a number :  ");
    scanf("%d" , &number);



     if(is_prime(number))
        printf("%d is prime" , number);
     else
        printf("%d is not  prime" , number);

}



Bool is_prime(int number){

    for(int i=2 ; i<= number/2 ; i++){

        if(number%i == 0)
            return false;

    }

    return true;

}
