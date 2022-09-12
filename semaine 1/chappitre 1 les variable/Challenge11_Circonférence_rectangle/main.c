#include <stdio.h>
#include <stdlib.h>

int main()
{
     puts("\n\n\n                                 Challenge 11 : Circonférence d'un rectangle\n\n"); // program title

     int  lenght  , width , circumference ;



     printf("enter the lenght of your rectangle  :  ");
     scanf("%d" , &lenght);


     printf("enter the width of your rectangle  :  ");
     scanf("%d" , &width);



     circumference = 2 * ( lenght + width) ;


     printf("\n\n\n                              the circumference of your circle is  :  %d\n\n" , circumference);
}


/*
Challenge 11 : Circonférence d'un rectangle

Écrivez un programme pour trouver la circonférence d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur.

La formule pour la circonférence d'un rectangle = 2*(longueur + largeur).
/
*/
