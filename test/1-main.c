#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a=0, b=0;    

	printf("<<<<<     -------%d-------     >>>>>\n", __LINE__);
	a = _printf("a=%sh\n","Hola Mundo");
	b = printf("b=%sh\n","Hola Mundo");
	(a != b)?printf("\a^^ a != b  a=%d\tb=%d ^^\n", a, b):a++; 

	printf("<<<<<     -------%d-------     >>>>>\n", __LINE__);
	a = _printf("a=%sh%%s\n","Hola Mundo");
	b = printf("b=%sh%%s\n","Hola Mundo");    
	(a != b)?printf("\a^^ a != b  a=%d\tb=%d ^^\n", a, b):a++; 

	printf("<<<<<     -------%d-------     >>>>>\n", __LINE__);
	a = _printf("a=%ss\n","Hola", " M");
	b = printf("b=%ss\n","Hola", " M");
	(a != b)?printf("\a^^ a != b  a=%d\tb=%d ^^\n", a, b):a++;

	printf("<<<<<     -------%d-------     >>>>>\n", __LINE__);
	a= _printf("a=%s\t\a%s\n","Hola Mundo"," 100");
	b= printf("b=%s\t\a%s\n","Hola Mundo"," 100");
	(a != b)?printf("\a^^ a != b  a=%d\tb=%d ^^\n", a, b):a++;   
	printf("<<<<<     -------%d-------     >>>>>\n", __LINE__);
	
	return (0);
}
