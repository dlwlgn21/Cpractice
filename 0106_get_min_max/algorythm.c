#include <assert.h>
#include <stddef.h>
#include "algorythm.h"

void get_min_max(const int array[], const size_t length, int* out_min, int* out_max)
{
	size_t i;
	/* pre-condition */
	assert(length >= 1);
	
	*out_min = array[0];
	*out_max = array[0];
	
	for(i = 1; i < length; ++i)
	{
		if(*out_min > array[i])
		{
			*out_min = array[i];
		}
		if(*out_max < array[i])
		{
			*out_max = array[i];
		}
	}

}

