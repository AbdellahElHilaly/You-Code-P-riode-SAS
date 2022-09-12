#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge  5 :     ~~~~  ~~~~~~~~~~~~~~~~~\n\n");

    int number , invers = 0 ;

    printf("\tenter a number : ");

    scanf("%d" , &number);




     while (number != 0)
   {
      invers = invers * 10;
      invers = invers + number%10;
      number = number/10;
   }

   printf("The number in reverse is = %d\n", invers);



}
