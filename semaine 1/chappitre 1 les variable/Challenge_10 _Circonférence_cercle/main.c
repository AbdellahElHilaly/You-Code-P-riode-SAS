#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14159265359 // variable double constance


int main()
{
     puts("\n\n\n                                 Challenge 10 : Circonference d'un cercle\n\n"); // program title

     float radius ; //declaration of the circle radius variable

     float circumference;//declaration of the circle circumference variable



     printf("enter the radius of your circle  :  ");
     scanf("%f" , &radius);


     circumference = 2*Pi*radius;


     printf("\n\n\n                              the circumference of your circle is  :  %f\n\n" , circumference);



}

/*
Challenge 10 : Circonférence d'un cercle

Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur.

La formule pour, la circonférence du cercle = 2πr ; où r est le rayon.

*/
