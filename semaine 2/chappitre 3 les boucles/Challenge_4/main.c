#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 3 : nomber premier      ~~~~  ~~~~~~~~~~~~~~~~~\n\n");

    int number = 1 ; // default value
    int  sum =0 , max = 0;



    while( printf("enter a number : ") , scanf("%d" , &number) , number > 0 && number < 100 ){


        sum+=number;

        if(max < number)
            max = number;


    }



    printf("\n\nthe sum of your series is : %d\n" , sum );

    printf("\n\nthe maximum number : %d\n\n" , max);


}
