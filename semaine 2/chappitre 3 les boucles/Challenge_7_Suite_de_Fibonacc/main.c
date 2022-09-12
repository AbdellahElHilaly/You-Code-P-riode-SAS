#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 7 : la suite de Fibonacci   ~~~~  ~~~~~~~~~~~~~~~~~\n\n");



     int n;




     printf("inter  n   : ");
     scanf("%d" , &n);




     if(n<1)
        printf("ERROR !!");

     else if(n==1 || n==2)
            printf("U%d = 1" , n);
     else{


        int U1 = 1 , U2 = 1 ,  Un;


        for(int i=3 ; i<=n ; i++){

            Un = U1 + U2;
            U1 = U2;
            U2 = Un;

        }


        printf("U%d = %d" , n , Un);


     }









}
