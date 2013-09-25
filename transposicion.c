/*
 * transposicion.c
 *
 *  Created on: 19/09/2013
 *      Author: jmorales
 */

#include <string.h>
#include <stdio.h>

void main()
{
  char string[9] = "Hola";
  printf("%s\n",string);
  string[3] = 'H';
  string[1] = 'o';
  string[2] = 'l';
  string[0] = 'a';
  printf("%s\n",string);
}


