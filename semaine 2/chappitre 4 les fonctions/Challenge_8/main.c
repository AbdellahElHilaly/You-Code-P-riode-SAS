#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int List[] = {3 , 6 ,  14  , 23 ,  45 , 50 , 85 , 100 , 109 , 207 };

    int length = sizeof(List)/sizeof(List[0]);


    printf("affichage :\t");

    Display(List , length);


    int valeur ;


    printf("entere la valeur : ");
    scanf("%d" , &valeur);

    int position = binary_search( List , 0  , length , valeur );

    if(position == -1) printf("%d ne trouve pas   \n\n" , valeur);
    else printf("%d se trouve aux posiont %d\n\n" , valeur , position );




}

int binary_search(int array[] , int L , int R , int V){



    while(L  <= R){
        int M = (L + R )/2 ;


        if(array[M] == V ) return M;
        else if(array[M] > V) R = M - 1;
        else L = M + 1;




    }


    return -1;



}



void Display(int array[] , int length){

    for(int i = 0 ; i < length ; i++)
        printf("%d\t" ,array[i] );

   printf("\n\n\n");

}
