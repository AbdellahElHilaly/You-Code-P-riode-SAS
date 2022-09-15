#include <stdio.h>
#include <stdlib.h>





void BubbeSort(int List[] , int siz);
void Swap(int *a , int *b);

int main()
{



    int A[] = {6,2,3,1,9,10,15,13,12,17};
    int a_size = sizeof(A)/sizeof(A[0]);




    puts("list before bubble Sort :");
    Display(A , a_size);



    BubbeSort(A , a_size);

    puts("\n\n\nlist after bubble Sort :");
    Display(A , a_size);

}



void BubbeSort(int List[] , int siz){

    for(int i=0 ; i<siz ; i++){
        for(int j=0 ; j< siz -1 -i; j++){

            if(List[j] > List[j + 1])

                Swap(&List[j] , &List[j + 1]);

        }

    }
}

void Swap(int *a , int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}


void Display(int array[] , int length){

    for(int i = 0 ; i < length ; i++)
        printf("%d\t" ,array[i] );

    printf("\n");

}











