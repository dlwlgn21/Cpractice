#include <stdio.h>
#include "simpleio.h"

int main(void)
{
	int result;
	result = add_int(4, 12, 3, 4, 15);
	printf("result is %d\n", result);

	printf_simple("s c\n", "hello", 'A');
	printf_simple("c c c\n", 'd', 'A', 'Z');
	printf_simple("d\n", 100);
	
	return 0;
}
