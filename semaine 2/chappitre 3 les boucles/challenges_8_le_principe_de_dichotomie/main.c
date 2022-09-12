#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double fx(double x);


int main()
{
     printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 8 : le principe de dichotomie   ~~~~  ~~~~~~~~~~~~~~~~~\n\n");


     double middle;
     double a = -15 , b = -10;

     middle = (a + b)/2;






     while(1){

        middle = (a + b)/2;


        if( fx(middle) < 0.00001 &&   fx(middle) > -0.00001)
            break;


        else if( fx(a) * fx(middle) < 0)
             b = middle;


        else if( fx(b) * fx(middle) < 0)
            a = middle;




     }



     printf("Solution : %lf\n" , middle);

     printf("Error  : %lf\n" , fx(middle));





}




double fx(double x){
    return pow(x , 3) + 12*pow(x , 2) + 1;
}
