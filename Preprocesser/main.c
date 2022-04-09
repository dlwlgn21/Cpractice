#include <stdio.h>

/* id(int), "name("const char*), hp(int) */
#define MONSTER_DATA \
	MONSTER_ENTRY(0, "pope", 100)	\
	MONSTER_ENTRY(1, "big rat", 30) \
	MONSTER_ENTRY(2, "mama", 255)	\
	MONSTER_ENTRY(3, "dragon", 3000)\

#define TO_STR(a) #a
#define PRINT(a,b) printf("%d\n", a##b)

int main (void)
{
/* TEST SHOP MODE */
#if defined TEST_SHOP
	int and_zero = 0;
	int and_one = 1;
	int and_two = 2;
	

	printf(TO_STR(dlwlgn21\n));
	printf(TO_STR("HELLO WORLD!!"\n));
		
	PRINT(and_, zero);
	PRINT(and_, one);
	PRINT(and_, two);

/* TUPLE MODE */
#elif TEST_TUPLE
	size_t i;
	
	int ids[] = {
#define MONSTER_ENTRY(id, name, hp) id,
	MONSTER_DATA
#undef MONSTER_ENTRY
	};

	const char* names[] = {
#define MONSTER_ENTRY(id, name, hp) name,
	MONSTER_DATA
#undef MONSTER_ENTRY
	};

	int health[] = {
#define MONSTER_ENTRY(id, name, hp) hp,
	MONSTER_DATA
#undef MONSTER_ENTRY
	};

	for (i = 0; i < sizeof(ids) / sizeof(int); ++i) {
		printf("%3d %6d %s\n",
			ids[i], health[i], names[i]);
	}


#endif
	return 0;
}
