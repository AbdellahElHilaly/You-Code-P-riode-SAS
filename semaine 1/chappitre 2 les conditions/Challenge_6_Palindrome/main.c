#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    puts("\n\n\n                                 Challenge 6 : Palindrome\n\n"); // program title



    char mot[50];


    printf("enter your word  :  ");


    scanf("%s" , mot);

    char mot_invers[50];
    int tille = strlen(mot);



    for(int i=0 ; i< tille ; i++)

        mot_invers[i] = mot[ tille - i - 1];



    if( ! strcmp(mot , mot_invers))
        printf("this  word  ( %s ) is Palindrome\n\n" , mot);
    else
        printf("this  word  ( %s ) is Not Palindrome\n\n" , mot);

}
