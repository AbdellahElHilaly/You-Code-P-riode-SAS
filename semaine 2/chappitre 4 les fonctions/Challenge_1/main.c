#include <stdio.h>
#include <stdlib.h>

int add(int a , int b);


int main()
{

     int n1 , n2 , sum;



     printf("enter the first number : ");
     scanf("%d" , &n1);

     printf("enter the second number : ");
     scanf("%d" , &n2);


     sum = add(n1 , n2);


     printf("%d  +  %d  =  %d" , n1 , n2 , sum);

}


int add(int a , int b){
    return a+b;
}
