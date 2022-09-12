#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 7 : la mention obtenue par un eleve\n\n"); // program title

    int moyenne ;

    printf("entree votre moyenne  : ");

    scanf("%d" , &moyenne);


    if( moyenne<0  || moyenne > 20 )
        printf("moyenne Error !!");

    else  if( moyenne >= 0  &&  moyenne < 10 )
        printf("tu es recale.");

     else  if( moyenne >= 10  &&  moyenne < 12 )
        printf("mention passable.");

    else  if( moyenne >= 12  &&  moyenne < 14 )
        printf("mention  assez bien.");


    else  if( moyenne >= 14  &&  moyenne < 16 )
        printf("mention  bien.");

    else  if( moyenne >= 16  &&  moyenne <= 20 )
        printf("mention tres bien.");






}
