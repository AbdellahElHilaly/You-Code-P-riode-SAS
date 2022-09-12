#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     puts("\n\n\n                                 Challenge 5 : Equation deuxieme degre\n\n"); // program title  






     printf("\n                   %c(%c) = aX%c + bX + c = 0\n\n\n" , 159 , 158 , 253);




     //~~~~~~~~~~~~~~~~~~~~~~~~ declaration and assignment of variables ~~~~~~~~~~~~~~~~~~~~~~~~


     float a , b , c ;


     printf("                   enter the value of a :  ");

     scanf("%f" , &a);


     if( a == 0 ){
        printf("ERROR   a = 0 !! ");
        exit(0);
     }


     printf("                   enter the value of b :  ");

     scanf("%f" , &b);

     printf("                   enter the value of c :  ");

     scanf("%f" , &c);



     //~~~~~~~~~~~~~~~~~~~~~~~~ declaration and calclat of the variable (delta) ~~~~~~~~~~~~~~~~~~~~~~~~


     float delta ;

     delta = pow( b , 2 ) - 4*a*c; //  Delta = b²  _ 4ac


     //~~~~~~~~~~~~~~~~~~~~~~~~ delta sign check and calculate  possible Solution ~~~~~~~~~~~~~~~~~~~~~~~~



     if(delta == 0){

        float X;
        X = -b/(2*a);
        printf("                   X = %f"  , X);
     }

     else if( delta > 0){

            float X1 , X2;

            X1 = (-b - sqrt(delta))/(2*a);
            X2 = (-b + sqrt(delta))/(2*a);


            printf("                   X1 = %f"  , X1);
            printf("                   X2 = %f"  , X2);

     }

     else
             printf("                   no solution"  );














}
