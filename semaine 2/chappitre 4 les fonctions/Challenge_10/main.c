#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int List[] = {12 , 6 ,  89  , 854 ,  5 , 0 , 285 , 1 , 9 , 97 };

    int length = sizeof(List)/sizeof(List[0]);


    printf("affiche normal :\t");

    Display(List , length);

    printf("affiche carre 1 :\t");

    Affiche_Carre_1(List , length);



    printf("affiche carre 2 :\t");



    for(int i = 0 ; i < length ; i++)
        Affiche_Carre_2(List[i]);



}




void Affiche_Carre_1(int array[] , int length) {

     for(int i = 0 ; i < length ; i++)

        printf("%d\t" ,array[i]*array[i]);

    printf("\n\n\n");

}


void Affiche_Carre_2(int n){

    printf("%d\t" , n*n);
}


void Display(int array[] , int length){

    for(int i = 0 ; i < length ; i++)
        printf("%d\t" ,array[i] );

   printf("\n\n\n");

}
