#include <stdio.h>
/**
 * main - A C program that prints size of variou types
 * Return: Always  0 (Success)
 *
 */ 
int main(void)
{
printf("Size of a char: %2d bytes \n ", sizeof(char));
printf("Size of int: %2d bytes \n ", sizeof(int));
printf("Size of long int : %2d bytes \n", sizeof(long int));
printf("Size of long long int: %2d bytes \n", sizeof(long long int));
printf("Size of float: %2d bytes \n", sizeof(float));
return (0);
}
