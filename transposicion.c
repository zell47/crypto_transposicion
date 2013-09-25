/*
 * transposicion.c
 *
 *  Created on: 19/09/2013
 *      Author: jmorales
 */

#include <string.h>
#include <stdio.h>
#define MAX 500

void main()
{
  char string[MAX],string2[MAX];
  int i=0;
  int ancho,pos;
  printf("Dime una palabra:");
  gets(string);
  ancho=strlen(string);
  while (i!=ancho){
	  pos=0;
	  printf("Dime la posicion de la letra %d: ",i+1);
	  scanf("%d",&pos);
	  string2[i] = string[pos-1];
	  i++;
  }
  if (i==ancho){
	  string2[i]='\0';
  }
  printf("%s\n",string2);
}


