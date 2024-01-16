#include "my.h"
#include <stdio.h>

/**
 * add - function to add two variables
 * @a: a variable
 * @b: a variable
 *
 * Return: Always a + b.
 */
int add(int a, int b)
{
	return (a + b);}
/**
 * sub- function to sub two variables
 * @a: a variable
 * @b: a variable
 *
 * Return: Always a - b.
 */
int sub(int a, int b)
{
	return (a - b);}
/**
 * mul- function to mul two variables
 * @a: a variable
 * @b: a variable
 *
 * Return: Always a * b.
 */
int mul(int a, int b)
{
	return (a * b);}
/**
 * div- function to div two variables
 * @a: a variable
 * @b: a variable
 *
 * Return: if (b!= 0) Always a / b.
 */

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);}
	else
	{
		return (0);}
}
/**
 * mod- function to mod two variables
 * @a: a variable
 * @b: a variable
 *
 * Return: if (b!= 0) Always a % b.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);}
	else
	{
		return (0);}
}
