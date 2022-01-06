#include <stdio.h>

int main(void)
{
	const int number = 0x12345678;
	const char* pointer = (char*) &number;
	size_t i;
	for(i = 0; i < sizeof(number); ++i)
	{
		printf("%xhx", *(pointer + i));
		/* 리틀인디언시스템일 경우에는 78563412로 나옴. */
		/* 빅인디언시스템일 경우에는 12345678로 나옴. */
	}
	printf("\n");

	printf("number in hex from 0x%x\n", number);
	printf("number in decimal %d\n", number);
	
	return 0;
}
