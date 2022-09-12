#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                   Challenge 13 : Affichage de la valeur octale et hexadecimale equivalente\n\n"); // program title

    int var_decimal;


    printf("enter a number :  ");

    scanf("%d" ,  &var_decimal);

    printf("\n\n\n                      %d en octal est : %o\n\n" ,  var_decimal , var_decimal);
    printf("\n\n\n                      %d en octal est : %x\n\n" ,  var_decimal , var_decimal);

}


