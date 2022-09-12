#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 2 : Paire ou Impaire\n\n"); // program title



    /* Definition les nombres pairs sont ceux qui se terminent par l'un des chiffres suivants : 0, 2, 4, 6, 8.
    les nombres impairs sont ceux qui se terminent par l'un des chiffres suivants : 1, 3, 5, 7, */

    int number;


    printf("enter a number : ");
    scanf("%d" , &number);





    if(number%2 == 0)//  number%2   est le rest du devision de la variable  (number)  par  (2)

        printf("\n\n                       %d   est  Paire\n\n"  , number);

    else

        printf("\n\n                       %d   est  Impaire\n\n"  , number);




}
