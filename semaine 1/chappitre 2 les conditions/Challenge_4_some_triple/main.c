#include <stdio.h>
#include <stdlib.h>

int main()
{
     puts("\n\n\n                                 Challenge 4 : some et triple\n\n"); // program title

     int var_1 , var_2 , somme ;

     printf("enter the first number : ");

     scanf("%d" , &var_1);

     printf("enter the second number : ");

     scanf("%d" , &var_2);

     somme = var_1 + var_2 ;

     printf("\n\n\n                    %d  + %d = %d\n\n\n" , var_1 , var_2 , somme);


     if(var_1 == var_2){

         int triple_somme = somme*3;

         printf("\n\n\n                    le triple du somme du (%d et %d ) est %d\n\n\n" , var_1 , var_2 , triple_somme);

     }







}
