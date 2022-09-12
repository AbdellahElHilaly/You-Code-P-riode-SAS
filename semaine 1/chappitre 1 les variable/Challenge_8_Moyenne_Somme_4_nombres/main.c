#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 8 : Moyenne et somme de 4 nombres\n\n"); // program title

    int n1 , n2 , n3 , n4 , som;
    float moyen;

    printf("enter numbers (n1 , n2 , n3 , n4 )   :  ");

    scanf("%d%d%d%d" , &n1 , &n2 , &n3 , &n4);



    som = n1 + n2 + n3 + n4 ;
    moyen = (float) som / 4;

    printf("\n\n                 la Somme du ( %d , %d , %d , %d ) est :  %d  " , n1 , n2 , n3 , n4 , som);
    printf("\n\n                 la Moyenne du ( %d , %d , %d , %d ) est :  %f\n\n " , n1 , n2 , n3 , n4 , moyen);


}


/*Challenge 8 : Moyenne et somme de 4 nombres

Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres. Prenez les entrées de l'utilisateur final.
*/
