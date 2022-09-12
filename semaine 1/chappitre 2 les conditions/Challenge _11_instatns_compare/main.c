#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("\n\n\n                      Challenge : 11  comparer deux instantes \n\n");






    int hh_1 , mm_1 , ss_1; // variable du 1er instant
    int hh_2 , mm_2 , ss_2; // variable du 2em instant



    puts("____________ Input first moment _____________");

    printf("enter the hour (hh) :");
    scanf("%d" , &hh_1);

    printf("enter the minute (mm) :");
    scanf("%d" , &mm_1);

    printf("enter the second (ss) :");
    scanf("%d" , &ss_1);



    puts("____________ Input second moment _____________");

    printf("enter the hour (hh) :");
    scanf("%d" , &hh_2);

    printf("enter the minute (mm) :");
    scanf("%d" , &mm_2);

    printf("enter the second (ss) :");
    scanf("%d" , &ss_2);





    if(hh_1 > hh_2) puts("the first moment is GREATER than the   second.");

    else if(mm_1 < mm_2) puts("the first moment is SMALER than the   second.");

    else {

        if(mm_1 > mm_2) puts("the first moment is GREATER than the   second.");

        else if(mm_1 < mm_2) puts("the first moment is SMALER than the   second.");

        else {

            if(ss_1 > ss_2) puts("the first moment is GREATER than the   second.");

            else if(ss_1 < ss_2) puts("the first moment is SMALER than the   second.");

            else puts("the first moment EQUALS   the  second moment.");
        }
    }
}
