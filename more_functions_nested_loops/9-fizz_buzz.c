#include <stdio.h>

/**
 * main - the main function of the program
 *
 * Return: returns zero on successful execution of the program
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i < 100)
{
printf(" ");
}
}

printf("\n");
return (0);
}
