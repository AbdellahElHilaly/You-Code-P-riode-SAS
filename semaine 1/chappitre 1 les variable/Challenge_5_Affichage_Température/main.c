#include <stdio.h>
#include <stdlib.h>

int main()
{
      puts("\n\n\n                                 Challenge 5 : Affichage Temperature\n\n"); // program title

      float T_f;  // the temperature  variable in Fahrenheit
      float T_c; //the temperature variable in degree Celsius

      printf("                                       enter the temperature in Fahrenheit : ");

      scanf("%f" , &T_f);

      T_c = (T_f - 32)/1.8;



      if(T_c <10)
        puts("\n\n\n                  tres froid");
      else if(T_c >= 10 && T_c <28)
        puts("\n\n\n                  froid");
      else if(T_c >= 28 && T_c <37)
        puts("\n\n\n                  chaud");
    else
        puts("\n\n\n                  tres chaud");





}


/*
Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)

La formule : C = (F-32)/1.8
*/
