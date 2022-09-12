#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n\n\n                                 Challenge 6 : Conversion du Fahrenheit au Celsius\n\n"); // program title

      float T_f;  // the temperature  variable in Fahrenheit
      float T_c; //the temperature variable in degree Celsius

      printf("                                       enter the temperature in Fahrenheit : ");

      scanf("%f" , &T_f);

      T_c = (T_f - 32)/1.8;

      printf("\n\n\n                                       %f Fahrenheit = %f Celsius\n\n\n" , T_f , T_c);
}


/*Challenge 6 : Conversion du Fahrenheit au Celsius

Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius

La formule : C = (F-32)/1.8
*/
