#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "hash_table.h"

void init_hash_table(int bucket[])
{
    size_t i;
    for (i = 0; i < BUCKET_SZIE; ++i) {
        bucket[i] = INT_MIN;
    }
}

int add_value(const char* key, int bucket[], int value, int (*hash_func)(const char*, const size_t))
{
    int start_idx;
    int hash = hash_func(key, strlen(key));
    start_idx = hash % BUCKET_SZIE;
    if (start_idx < 0) {
        start_idx += BUCKET_SZIE;
    }

    do {
        if (bucket[start_idx] == INT_MIN) {
            bucket[start_idx] = value;
            return TRUE;
        } else if (bucket[start_idx] == value) {
            return TRUE;
        }

        start_idx = (start_idx + 1) % BUCKET_SZIE;
    } while (start_idx != hash);
    
    return FALSE;

}

int has_value(const char* key, int bucket[], int (*hash_func)(const char*, const size_t))
{
    int start_idx;
    int hash = hash_func(key, strlen(key));
    start_idx = hash % BUCKET_SZIE;
    if (start_idx < 0) {
        start_idx += BUCKET_SZIE;
    }

    do {
        if (bucket[start_idx] != INT_MIN) {
            return TRUE;
        } else {
            return FALSE;
        }
        start_idx = (start_idx + 1) % BUCKET_SZIE;
    } while (start_idx != hash);
    assert(FALSE);

}
int get_value(const char* key, int bucket[], int (*hash_func)(const char*, const size_t))
{
    int start_idx;
    int hash = hash_func(key, strlen(key));
    start_idx = hash % BUCKET_SZIE;
    if (start_idx < 0) {
        start_idx += BUCKET_SZIE;
    }

    do {
        if (bucket[start_idx] != INT_MIN) {
            return bucket[start_idx];
        } else {
            return INT_MIN;
        }
        start_idx = (start_idx + 1) % BUCKET_SZIE;
    } while (start_idx != hash);
    assert(FALSE);
}

int hash_65599(const char* str, const size_t len)
{
    size_t i;
    int hash = 0;

    for (i = 0; i < len; ++i) {
        hash = 65599 * hash + str[i];  
    }

    return hash ^ (hash >> 16);
}

