#include <stdio.h>
#include <stdlib.h>

int main()
{
     puts("\n\n\n                                   Challenge 2 : Conversion du Celsius au Fahrenheit\n\n"); // program title
     float T_c; // Temperature variable in Celsius.
     float T_f; //// Temperature variable in Fahrenheit.

     printf("enter the  Temperature in  Celsius : ");
     scanf("%f" , &T_c); // T_c input by users at the keyboard.


     T_f = (T_c*1.8) + 32 ;//calculate ft from the relation F = (C*1.8)+32

     printf("\n\n                                      the Temperature in Fahrenheit is :  %f \n\n" , T_f); //  final temperature display in fahrenhite

}
