#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n\n\n                      Challenge : 10 jour aleatoire \n\n");


    int var_round;

    time_t now = time(NULL);











    /* Intializes random number generator*/
    //srand( (unsigned) time(&t) );




    var_round =  now % 7 ; // generate random numbers from 0  to 6

    if( var_round == 0) puts("Monday");
    else if( var_round == 1) puts("Tuesday");
    else if( var_round == 2) puts("Wednesday");
    else if( var_round == 3) puts("Thursday");
    else if( var_round == 4) puts("Friday");
    else if( var_round == 5) puts("Saturday");
    else if( var_round == 6) puts("Sunday");











}
