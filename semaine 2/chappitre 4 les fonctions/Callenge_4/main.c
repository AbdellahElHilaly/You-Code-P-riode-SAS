#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool is_prime(int n);
int divededby(int n,int a);





int main()
{

    int n  , a;

    printf("enter n : ");
    scanf("%d" , &n);


    printf("enter a : ");
    scanf("%d" , &a);


    printf("%d "  ,  divededby(n , a));







}


bool is_prime(int n){

    for(int i=2 ; i<n/2 ; i++){
        if(n%i == 0)
            return false;
    }

    return true;
}

int divededby(int n,int a){

    if( a == 0){
        printf("error devision par 0");
        return;
    }

    else if(is_prime(n)){
        printf("error n is  prime ");
        return;
    }

    else
        return   (n/a);
}








/*
Créez une fonction divededby(int n,int a) qui retoune la division des deux valeurs.
Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true,
 sinon on retourne false.

 */



