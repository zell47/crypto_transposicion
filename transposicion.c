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
	char string[MAX],string2[MAX],string3[MAX],caracter;
	int i=0,j=0,k=0;
	int ancho,pos,op;
	printf("Encriptacion por transposicion\n");
	printf("Que deseas hacer?\n");
	printf("1.Encriptar\n");
	printf("1.Desencriptar\n");
	scanf("%d",&op);
	getchar();
	if (op==1){
		printf("Letras a encriptar:");
		gets(string);
		printf("%s\n",string);
		for (j=0;caracter !='32' || caracter!='0';j++){
			caracter = string[j];
			if (caracter !='32'){
				string3[k] = caracter;
				k++;
			}
		}
		string3[i]='\0';
		printf("%s\n",string3);
		ancho=strlen(string3);
		while (i!=ancho){
			pos=0;
			printf("Dime la posicion de la letra %d: ",i+1);
			scanf("%d",&pos);
			string2[i] = string3[pos-1];
			i++;
		}
		if (i==ancho){
			string2[i]='\0';
		}
		printf("%s\n",string2);
	}

}


