#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 3 : Conversion du Mile  au Km\n\n"); // program title
    float dist_km; // Distance variable in kilometer
    float dist_mil ; // Distance variable in mile

    printf("                                       enter the distance in mile : ");

    scanf("%f" , &dist_mil);

    dist_km =  dist_mil * 1.609; // calculate the distance in mille

    printf("\n\n\n                                       %f mile = %f km\n\n\n" , dist_mil , dist_km);



}

/*

Challenge 3 : Conversion du Mile au Km

Ecrivez un programme qui demande la distance en Metre et la transforme en Mile

La formule : Mile = Km*1.609

(tenir en compte la conversion métrique)

*/
