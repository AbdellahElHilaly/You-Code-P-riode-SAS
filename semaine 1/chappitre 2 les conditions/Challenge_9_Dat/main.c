#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("                                             challange 9 : date \n\n\n");

    int MM , jj , yy;

    printf("entree le joure : ");
    scanf("%d" , &jj);

    printf("entree le moi : ");
    scanf("%d" , &MM);


    printf("entree l'annee : ");
    scanf("%d" , &yy);



     printf("%d-" , jj);




    if(MM == 1)
        printf("Janvier");
    else if(MM == 2)
        printf("Fevrier");
    else if(MM == 3)
        printf("Mars");
    else if(MM == 4)
        printf("Avril");
    else if(MM == 5)
        printf("Mai");
    else if(MM == 6)
        printf("Juin");
    else if(MM == 7)
        printf("Juillet");
    else if(MM == 8)
        printf("août");
    else if(MM == 9)
        printf("septembre");
    else if(MM == 10)
        printf("octobre");
    else if(MM == 11)
        printf("novembre");
    else if(MM == 12)
        printf("decembre");











    printf("-%d" , yy);


}
