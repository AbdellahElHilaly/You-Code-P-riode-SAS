#include <stdio.h>
#include <stdlib.h>

int main()
{

    puts("\n\n\n                                   Challenge 1 : Affichage Informations     input\n\n"); // program title

    char first_name[15] , last_name[15] , sex[8] , phone_number[13]; // declaration of  variables
    int age;

    printf("enter your first name : ");   // enter data
    gets(first_name);

    printf("enter your last name : ");
    gets(last_name);

    printf("enter your age : ");
    scanf("%d" , &age);

    printf("enter your last sex  (male) or (female) : ");
    scanf("%s" , sex);

    printf("enter your last phone umber : ");
    scanf("%s" , phone_number);
    system("cls");


     puts("\n\                       Challenge 1 : Affichage Informations         output\n\n");




    printf("                               First Name     :   %s\n" , first_name);
    printf("                               Last Name      :   %s\n" , last_name);
    printf("                               Age            :   %d\n" , age);
    printf("                               Sex            :   %s\n" , sex);
    printf("                               Phone Number   :   %s\n" , phone_number);


}


//Nom, prénom , Age , Sexe et numéro de téléphone. Les données sont saisies à partir du clavier.
