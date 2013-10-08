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
	char string[MAX],string2[MAX],string3[MAX];
	char c;
	int i=0,j=0,per=0;
	int ancho,pos,op;
	printf("Encriptacion por transposicion\n");
	printf("Que deseas hacer?\n");
	printf("1.Encriptar\n");
	printf("2.Desencriptar\n");
	scanf("%d",&op);
	getchar();
	if (op==1){
		printf("Letras a encriptar:");
		gets(string);
		strcpy(string2,string);
		ancho=strlen(string);
		printf("Periodo: ");
		scanf("%d",&per);

		int v[per];

		while (j!=per){
			printf("Dime la posicion de la letra %d: ",j+1);
			scanf("%d",&pos);
			v[j] = pos;
			j++;
		}
		//for (j=0; j<per; j++) printf("v[%1d]=%d\n",j,v[j]); Mostrar Vector de Posicion
		strcpy(string,string2);
		while (i<ancho){
			pos=0;
			for (j=0; j<per; j++){
				pos = v[j];
				c = string[pos-1+i];
				printf("%c", c);
			}
			i=i+per;
		}
	}
	if (op==2){
				printf("Letras a desencriptar:");
				gets(string);
				strcpy(string2,string);
				ancho=strlen(string);
				printf("Periodo: ");
				scanf("%d",&per);

				int v[per];

				while (j!=per){
					printf("Dime la posicion de la letra %d: ",j+1);
					scanf("%d",&pos);
					v[j] = pos;
					j++;
				}
				strcpy(string,string2);
				while (i<ancho){
					pos=0;
					for (j=0; j<per; j++){
						pos = v[j];
						c = string[pos-1+i];
						printf("%c", c);
					}
					i=i+per;
				}
	}
}
