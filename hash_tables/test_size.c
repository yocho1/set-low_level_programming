#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    printf("Size of hash_table_t: %lu bytes\n", sizeof(hash_table_t));
    printf("Size of hash_node_t *: %lu bytes\n", sizeof(hash_node_t *));
    printf("Total for 2048: %lu + %lu * 2048 = %lu\n",
           sizeof(hash_table_t),
           sizeof(hash_node_t *),
           sizeof(hash_table_t) + sizeof(hash_node_t *) * 2048);
    return (0);
}
