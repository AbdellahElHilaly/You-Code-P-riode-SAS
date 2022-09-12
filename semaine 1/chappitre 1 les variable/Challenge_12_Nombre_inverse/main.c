#include <stdio.h>
#include <stdlib.h>

int main()
{
     puts("\n\n\n                                Challenge 12 : Nombre entier a trois chiffres en ordre inverse\n\n"); // program title

     int  number;



     printf("enter a three-digit number  :  ");
     scanf("%d" , &number);

     /* 237  this number contains 3 digits ,
     I'll take it every number and save it in special variable : degit_1 , dejit_2 , degit_3 .*/

     int dejit_1 , dejit_2 , dejit_3;


     dejit_1 = number/100; // 768 / 100 =  7  SO dejit_1 = 7

     dejit_2 = number/10 - dejit_1*10;  // 768 / 10  = 76 and  76 - 7*10 = 6 SO dejit_2 = 6

     dejit_3 = number - dejit_1*100 - dejit_2*10;// 768 - 7*100  - 6*10 = 8 SO dejit_3 = 8



     printf("\n\n\n            l'inverse du %d est : %d%d%d \n\n\n" ,number , dejit_3 , dejit_2 , dejit_1);







}

/*


Challenge 12 : Nombre entier à trois chiffres en ordre inverse

Écrivez un programme C pour afficher un nombre entier à trois chiffres dans l'ordre inverse sans utiliser

la boucle. Par exemple, si le nombre entier est 234, son inverse est 432.
*/
