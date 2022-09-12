#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 4 : Conversion du km au Mile\n\n"); // program title
    float dist_km; // Distance variable in kilometer
    float dist_mil ; // Distance variable in mile

    printf("                                       enter the distance in kilometer : ");

    scanf("%f" , &dist_km);

    dist_mil =  dist_km/1.609; // calculate the distance in mille

    printf("\n\n\n                                       %f km = %f mile\n\n\n" , dist_km , dist_mil);

}
