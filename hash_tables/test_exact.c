#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht = hash_table_create(2048);
    if (ht)
        printf("Hash table created successfully\n");
    return (0);
}
