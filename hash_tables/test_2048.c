#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht = hash_table_create(2048);
    if (ht)
    {
        printf("Table created with size: %lu\n", ht->size);
        printf("Table count: %lu\n", ht->count);
    }
    return (0);
}
