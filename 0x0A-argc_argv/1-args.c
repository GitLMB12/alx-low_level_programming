#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d", argc - 1);
	return (0);
}
