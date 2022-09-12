#include <stdio.h>
#include <stdlib.h>

int main()
{



    int comp = 1 , sum = 0 , number;


    while( comp <= 10){

            printf("enter le number ( %d ): " , comp) ;

            scanf("%d" , &number);

            if(number >= 0){

               sum+= number;
               comp++;

            }

    }


    printf("sum = %d" , sum);



}
