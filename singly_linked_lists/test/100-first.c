#include <stdio.h>

void __attribute__((constructor)) print_before_main();

/**
* print_before_main - Prints a message before main function is executed
*/
void print_before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
