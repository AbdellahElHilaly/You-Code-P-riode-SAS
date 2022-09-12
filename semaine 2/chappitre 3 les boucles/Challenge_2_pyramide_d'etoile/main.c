#include <stdio.h>
#include <stdlib.h>

int main()
{
       printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 2: pyramide d'etoile     ~~~~  ~~~~~~~~~~~~~~~~~\n\n");


       int line_number ;



       printf("enter the number of lines : ");


       scanf("%d" , &line_number);



       for(int i=0 ; i<line_number ; i++){

            for(int j=0 ; j< line_number - i ; j++)

                printf(" ");





            for(int k=0 ; k<2*i + 1 ; k++)
                printf("*");

            printf("\n");




       }


}
