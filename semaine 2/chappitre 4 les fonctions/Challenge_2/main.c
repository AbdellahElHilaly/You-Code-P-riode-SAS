#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 9 , b =22;




    printf("before swapping\n");
    printf("a = %d \nb = %d\n\n" , a , b);



    Swap(&a , &b);



    printf("after swapping\n");
    printf("a = %d \nb = %d \n\n" , a , b);


}




void Swap(int *a , int *b){
    int temp;

    temp = *a ;

    *a =  *b ;

    *b = temp;
}
