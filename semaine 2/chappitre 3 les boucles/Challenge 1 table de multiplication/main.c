#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 1: table de multiplication     ~~~~  ~~~~~~~~~~~~~~~~~\n\n");

    int number ;

    printf("\tenter a number : ");

    scanf("%d" , &number);


    for(int i=0 ; i<=10 ; i++)


        printf("\t%d\t*\t%d\t=\t%d\n" , number , i , number*i);


}
