#include <stdio.h>
#include "hash_table.h"

int main(void)
{
    int bucket[BUCKET_SZIE];
    int result;
    const char* key1 = "happy";
    const char* key2 = "secret";
    const char* key3 = "cold";
    const char* key4 = "cool";

    
    init_hash_table(bucket);

    add_value(key1, bucket, 1, hash_65599);
    add_value(key2, bucket, 2, hash_65599);
    add_value(key3, bucket, 3, hash_65599);
    add_value(key4, bucket, 4, hash_65599);

    if (has_value(key1, bucket, hash_65599)) {
        result = get_value(key1, bucket, hash_65599);
        fprintf(stderr, "get_value result is %s\n%s value is %d\n", result == TRUE ? "TRUE" : "FALSE", key1, result);
    }
    result = has_value("dlwl", bucket, hash_65599);
    fprintf(stderr, "has_value result is %s\n%s value is %d\n", result == TRUE ? "TRUE" : "FALSE", "dlwl", get_value("dlwl", bucket, hash_65599));

    if (has_value(key2, bucket, hash_65599)) {
        result = get_value(key2, bucket, hash_65599);
        fprintf(stderr, "%s value is %d\n", key2, result);
    }

    if (has_value(key3, bucket, hash_65599)) {
        result = get_value(key3, bucket, hash_65599);
        fprintf(stderr, "%s value is %d\n", key3, result);

    }

    if (has_value(key4, bucket, hash_65599)) {
        result = get_value(key4, bucket, hash_65599);
        fprintf(stderr, "%s value is %d\n", key4, result);

    }

    result = has_value("novalue", bucket, hash_65599);
    fprintf(stderr, "has_value result is %s\n%s value is %d\n", result == TRUE ? "TRUE" : "FALSE", "novalue", get_value("novalue", bucket, hash_65599));




    return 0;
}
