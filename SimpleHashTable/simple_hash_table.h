#ifndef SIMPLE_HASH_TABLE
#define SIMPLE_HASH_TABLE

#define BUCKET_SIZE (23)
#define MAX_VALUE_COUNT (10)
#define TRUE (1)
#define FALSE (0)

void init_simple_hash_table(int bucket[]);

int add_value(int bucket[], int value);

int has_value(int bucket[], int value);

#endif /* SIMPLE_HASH_TABLE */
