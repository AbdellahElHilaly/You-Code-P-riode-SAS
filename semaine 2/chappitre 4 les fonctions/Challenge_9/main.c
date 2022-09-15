#include <stdio.h>
#include <stdlib.h>

int main()
{
    int List[] = {12 , 6 ,  89  , 854 ,  5 , 0 , 285 , 1 , 9 , 97 };

    int length = sizeof(List)/sizeof(List[0]);

    Display(List , length);



    int search;


    printf("enter the number you are looking for : ");

    scanf("%d" , &search);

    int position =  binary_search(List , length , search) ;

    if(position == -1)
        printf("number not found !");
    else
        printf("number is found in the position %d " ,  position);



}


void Display(int array[] , int length){

    for(int i = 0 ; i < length ; i++)
        printf("%d\t" ,array[i] );

    printf("\n");

}

int binary_search(int array[] , int length , int search){

    for(int i=0 ; i<length ; i++){
         if(array[i] == search)
            return i;
    }

    return -1;

}

