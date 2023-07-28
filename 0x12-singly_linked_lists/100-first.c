#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - print line before main
 * execute before main
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my ouse upon my back!,\n");
}

