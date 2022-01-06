#include <stdio.h>
#include "algorythm.h"

#define LENGTH (5)

int main(void)
{
	int array[LENGTH] = { 5, 10, 3, 7, 15};
	int min;
	int max;

	get_min_max(array, LENGTH, &min, &max);
	printf("min value is %d\n", min);
	printf("max value is %d\n", max);

}
