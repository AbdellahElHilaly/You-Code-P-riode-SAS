#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("\n\n     ~~~~~~~~~~~~~~~~~  ~~~~    Challenge 6 : champ des nombres premier      ~~~~  ~~~~~~~~~~~~~~~~~\n\n");



     int n , is_prime = 1;




     printf("inter a number : ");
     scanf("%d" , &n);





     for(int p=2 ; p<=n ; p++){
        is_prime = 1;



         for(int i=2 ; i<= p/2  ; i++){


                if(p%i == 0)

                    is_prime = 0;

        }




        if(is_prime)

            printf("%d\t" , p);




    }


}


