#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 7 : Calcule et affichage résultat en format decimal\n\n"); // program title


    // declaration variables
    int a , b ;
    float result;
    char opearation , modulus = '%';

    printf("enter your first number  : ");

    scanf("%d" , &a);

    printf("choose your operation ( + , - , * , / , %c )  : " , modulus);

    scanf(" %c" , &opearation);


     printf("enter your second number  : ");

    scanf("%d" , &b);

    // calculate the result

    switch(opearation){
        case '+' : result = a + b;
        break;
        case '-' : result = a - b;
        break;
        case '*' : result = a * b;
        break;
        case '/' :
             if(b == 0){
                puts("ERROR devision by ZERO !");
                exit(0);
             }
             else
                result = (float) a / b;

        break;
        case '%' :
             if(b == 0){
                puts("ERROR devision by ZERO !");
                exit(0);
             }
             else
             result =  a % b;
        break;
    }


    printf("         %d   %c   %d   =   %f"  , a , opearation , b , result);


}


/*Challenge 7 : Calcule et affichage résultat en format décimal

a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine.
 (a/b donne le quotient de la division, a%b donne le reste de la division)
 */
