#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>










int main()
{





    int A[7] = {22,5,101,8,6,16,9};
    int a_size = sizeof(A)/sizeof(A[0]);




    puts("list before Quick Sort :");
    Display(A , a_size);





    QuickSort(A , 0  , a_size);














    puts("\n\n\nlist after Quick Sort :");


    Display(A , a_size);



}


void QuickSort(int List[] ,  int start  , int end  ){




      if(start < end ){


            int pivot_indis = partition(List  , start  , end );



            QuickSort(List , start , pivot_indis);


            QuickSort(List , pivot_indis+1 , end);


      }



}




int   partition(int List[] , int start ,  int end ){


    int i , j , pivot_value , pivot_indis;



    i = start;
    j = end -1;
    pivot_indis = i;
    pivot_value = List[start];

    bool j_i_move = true;



    while(i != j){


            if(j_i_move){

                if( List[j] >= pivot_value){
                    j--;
                }

                else {

                    Swap( &List[j] , &List[pivot_indis] );

                    pivot_indis = j;

                    j_i_move = false;

                }

            }

            else {

                if( List[i] <= pivot_value){
                    i++;
                }

                else {

                    Swap( &List[i] , &List[pivot_indis] );

                    pivot_indis = i;

                    j_i_move = true;

                }


            }

    }



    return pivot_indis;



}










void Display(int array[] , int length){


    for(int i = 0 ; i < length ; i++)
        printf("%d\t" ,array[i] );

    printf("\n\n\n");


}


void Swap(int *a , int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}




