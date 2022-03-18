#include <stdio.h>
#include <limits.h>
#include "simple_hash_table.h"

int main(void)
{
    int bucket[BUCKET_SIZE];
    int result;
    int i;
    /* 10개 요소가 최대임!! */
    init_simple_hash_table(bucket);
    add_value(bucket, 15);
    add_value(bucket, 23);
    add_value(bucket, 21);
    add_value(bucket, 4);
    add_value(bucket, 5);

    result = has_value(bucket, 15);
    printf("has_value(15) result is %s\n", result == TRUE ? "Yes It has\n" : "NO! It has NOT\n");
    result = has_value(bucket, 1);
    printf("has_value(1) result is %s\n", result == TRUE ? "Yes It has\n" : "NO! It has NOT\n");
    for (i = 0; i < BUCKET_SIZE; ++i) {
        printf("[%d]th bucket::[%d]\n", i, bucket[i]);
    }




    return 0;
}
