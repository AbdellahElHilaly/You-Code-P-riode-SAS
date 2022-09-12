#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n\n                      Challenge : 12   point apartien d'un segment \n\n");



    puts("   ~~~~~ input the coordinates of the Piece (X1 , Y1) ; (X2 , Y2) ~~~~~");

    double x1 , x2 , y1 , y2;


    puts("enter x1 :");
    scanf("%lf" , &x1);


    puts("enter y1 :");
    scanf("%lf" , &y1);


    puts("enter x2 :");
    scanf("%lf" , &x2);


    puts("enter y2 :");
    scanf("%lf" , &y2);







    puts("   ~~~~~ input the coordinates of the Point (X ,Y) ~~~~~");

    double x , y;

    puts("enter x :");
    scanf("%lf" , &x);


    puts("enter y :");
    scanf("%lf" , &y);


    printf("Coordinates of the piece ______________\n\n");

    printf("X1=%lf  Y1=%lf                      X2=%lf   Y2=%lf \n\n" , x1,y1,x2,y2);

    printf("Coordinates of the Point ______________\n\n\n");

    printf("X=%lf       Y=%lf\n\n\n" , x,y);


    /*------------------------------------------------------------ justification
    la relation du degmant dans le plan est :
    Y = ax + b donc en va calculer a et b
    on sait que
                        y2 - y1       deltaY
                   a = ---------  = --------
                        x2 - x1       deltaX

    est en sait que
                                   deltaY
                    b = y1 - x1* ---------
                                   deltaX

                                */

    double a = (y2 - y1)/(x2 - x1)   ,  b =  y1 - x1*a;

    printf("%lf\t%lf\n\n" , a,b) ; // des information du segmant


    //  check if the point is belongs to the segment  ::::


    if(x>=x1 && x<=x2 || x<=x1 && x>=x2 ){

        if(y>=y1 && y<=y2 || y<=y1 && y>=y2 ){

            if((a*x + b - y) == 0 )

                printf("this point  belongs to the piece :) :) :)");


            else printf("this point does not belongs to the piece :( :( :(");

        }
        else printf("this point does not belongs to the piece :( :( :(");


    }
    else printf("this point does not belongs to the piece :( :( :(");

    puts("\n\n\n\n");
}
