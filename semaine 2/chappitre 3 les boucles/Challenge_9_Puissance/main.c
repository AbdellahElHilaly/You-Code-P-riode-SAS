#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 9 :la puissance  ~~~~  ~~~~~~~~~~~~~~~~~\n\n");


    int x , n ;

    printf("entrer la base : ");
    scanf("%d" , &x);


    printf("entrer l'exposant  : ");
    scanf("%d" , &n);



    if(x<= 0 || n < 0 ){
        printf("ERROR ");
        exit(0);

    }

    int p = 1 ; // variable de la puissance

    int count = 0; //un compteur






    while(count++ < n)
        p=p*x;

    printf("%d" , p);



}
