#include main.h
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _puts(char *str)
{
int i = 0;
while(str[i])
{
_putchar(str[i]);
	i++;
}
_putchar('\n');   

}
