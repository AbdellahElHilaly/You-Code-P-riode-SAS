#include <stdio.h>
#include <stdlib.h>





int main()
{

    int A[] = {6,2,3,1,9,10,15,13,12,17};
    int a_size = sizeof(A)/sizeof(A[0]);




    puts("list before MergeSort :");
    Display(A , a_size);



    MergeSort(A , a_size);

    puts("\n\n\nlist after MergeSort :");
    Display(A , a_size);



}












void Merge(int T_1[] , int T_2[] , int T_merg[] , int size_1 , int size_2 ){

    int i=0 , j=0 , k=0;


    while(i<size_1 && j < size_2){

        if(T_1[i] < T_2[j]) T_merg[k++] = T_1[i++];
        else T_merg[k++] = T_2[j++];


    }


    while(i<size_1) T_merg[k++] = T_1[i++];

    while(j<size_2) T_merg[k++] = T_2[j++];


}







void MergeSort(int Lst[] , int lst_size ){


    int mid ,i ;
    if(lst_size < 2) return;
    mid = lst_size/2;


    int Left[mid];
    int Right[lst_size - mid];


    for(i = 0 ; i < mid ; i ++) Left[i] = Lst[i];
    for(i = mid ; i < lst_size ; i++) Right[i - mid] = Lst[i];


    MergeSort(Left,mid);
    MergeSort(Right,lst_size-mid);



    Merge(Left , Right , Lst , mid , lst_size-mid );



}




void Display(int array[] , int length){

    for(int i = 0 ; i < length ; i++)
        printf("%d\t" ,array[i] );

}
