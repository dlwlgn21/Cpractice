#ifndef HASH_TABLE_H 
#define HASH_TABLE_H

#define BUCKET_SZIE (23)
#define TRUE (1)
#define FALSE (0) 

void init_hash_table(int bucket[]);

int add_value(const char* key, int bucket[], int value, int (*hash_func)(const char*, const size_t));

int has_value(const char* key, int bucket[], int (*hash_func)(const char*, const size_t));

int get_value(const char* key, int bucket[], int (*hash_func)(const char*, const size_t));

int hash_65599(const char* str, const size_t len);

#endif /* HASH_TABLE_H */
