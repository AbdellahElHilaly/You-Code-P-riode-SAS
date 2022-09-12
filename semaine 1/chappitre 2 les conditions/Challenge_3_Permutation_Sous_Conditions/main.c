#include <stdio.h>
#include <stdlib.h>

int main()
{
   puts("\n\n\n                                 Challenge 3 : Permutation Sous Conditions\n\n"); // program title
   int var_1 , var_2;


   printf("enter two numbers : ");
   scanf("%d%d" , &var_1 , &var_2);


   if(var_1 > var_2)

        printf("\n\n\n                    %d  est plus grand que %d\n\n\n" , var_1 , var_2);

   else if(var_1 < var_2)

        printf("\n\n\n                    %d  est plus petit que %d\n\n\n" , var_1 , var_2);

   else

        printf("\n\n\n                    %d  est   egal  %d\n\n\n" , var_1 , var_2);







}
