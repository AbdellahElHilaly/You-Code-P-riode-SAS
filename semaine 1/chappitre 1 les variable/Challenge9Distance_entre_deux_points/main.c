#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    puts("\n\n\n                                 Challenge 9 : Distance entre deux points\n\n"); // program title

    int x1 , y1 ; // the variables of the coordinate of the first point
    int x2 , y2 ; // the variables of the coordinate of the second point

    float distance;


    printf("enter the coordinate of the first point ( x1 , y1 )  :  ");
    scanf("%d%d" , &x1 ,  &y1 );

    printf("enter the coordinate of the first point ( x2 , y2 )  :  ");
    scanf("%d%d" , &x2 ,  &y2);


    distance = sqrt(  pow( x2 - x1 , 2)  +  pow( y2 - y1 , 2) );

    printf("\n\n\n                                 la distance entre le point (%d , %d) et le point (%d , %d ) est :  %f" , x1,y1  , x2,y2 , distance);
    printf("\n\n\n");



}





        /*
        Challenge 9 : Distance entre deux points

        Ecrivez un programme C pour trouver la distance entre deux points donnés.

        La formule de distance est dérivée du théorème de Pythagore. Pour trouver la distance
        entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser les coordonnées de ces paires
        ordonnées et d'appliquer la formule. Formule de distance

        Supposons que nous ayons deux points M et N, dont les coordonnées sont respectivement (x1, y1)
        et (x2, y2). Leur distance peut être représentée par MN et peut être calculée selon la formule ci-dessous,

        Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) Distance (MN):- √((x2-x1)² + (y2-y1)²)
        Exemple:- M = (4, 8) N = (12, 14) Alors la distance entre M et N est
        MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10*/
