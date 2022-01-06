#include <stdio.h>
#include "is_overrap.h"

int main(void)
{
	int nums1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int nums2[5] = { 6, 7, 8, 9, 10 };
	
	int* nums3_pointer = nums1 + 3;
	size_t nums3_length = 5u;
	char* result = NULL;	
	
	result = is_overrap(nums1, ARRAY_LENGTH(nums1),
			nums2, ARRAY_LENGTH(nums2)) ? "OVERRAP" : "NOT";
	
	printf("nums1 and nums2 are overraped??\n %s\n", result);
	
	result = is_overrap(nums1, ARRAY_LENGTH(nums1), 
		nums3_pointer, nums3_length) ? "OVERRAP!!" : "NOT!!";

	printf("num1 and num3_pointer are overraped???\n %s\n", result);
	
	return 0;
}
