#include "is_overrap.h"

int is_overrap(int* nums1, const size_t length1, int* nums2, const size_t length2)
{

	return (nums1 <= nums2) ?
	nums1 + length1 > nums2 :
	nums2 + length2 > nums1;
	/* 1000 <= 1004 ? 즉, num1가 num2보다 왼쪽에 있으면 */
	/* 1000 + 5 = 1014 > 1004 겹침!!! */
	/* 1000 <= FFC 즉, num2가 num1보다 왼쪽에 있으면 */
	/* FFC + 3 = 1008  > num1 이면 겹침!!*/
}
