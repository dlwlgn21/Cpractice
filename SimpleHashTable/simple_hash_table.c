#include <limits.h>
#include "simple_hash_table.h"

void init_simple_hash_table(int bucket[])
{
    size_t i;
    /* 비어있음을 INT_MIN으로 표현 */
    for (i = 0; i < BUCKET_SIZE; ++i) {
        bucket[i] = INT_MIN;
    }
}
int add_value(int bucket[], int value)
{
    int start_idx;
    int hash_val = value % BUCKET_SIZE;
    if (hash_val < 0) {
        hash_val += BUCKET_SIZE;
    }
    start_idx = hash_val;

    do {
        if (bucket[start_idx] == INT_MIN) {
            bucket[start_idx] = value;
            return TRUE;
        } else if (bucket[start_idx] == value) {
            /* Already has value */
            return TRUE;
        }
        start_idx = (start_idx + 1) % BUCKET_SIZE;
    } while (start_idx != hash_val);

    return FALSE;
}

int has_value(int bucket[], int value)
{
    int start_idx;
    int hash_val = value % BUCKET_SIZE;
    if (hash_val < 0) {
        hash_val += BUCKET_SIZE;
    }
    start_idx = hash_val;

    do {
        if (bucket[start_idx] == value) {
            return TRUE;
        } else if (bucket[start_idx] == INT_MIN) {
            return FALSE;
        }
        start_idx = (start_idx + 1) % BUCKET_SIZE;     
    } while (start_idx != hash_val);

    return FALSE;
    
}
