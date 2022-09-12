#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c ;


    printf("enter a character : ");
    scanf("%c" , &c);


    if(isalpha(c) == 1)
        printf("alphabet Majuscule");


    else  if(isalpha(c) == 2)
            printf("alphabet minuscule");

    else
         printf("non alphabet");


}
