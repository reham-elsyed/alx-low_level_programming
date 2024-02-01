#include "hash_tables.h"

/**
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t * new_ht;

	new_ht = malloc(sizeof hash_table_t);

	if (!new_ht)
	{
		fprintf("stderr, malloc error\n");
		exit(EXIT_FAILURE);
	}

	new_ht->size = size;
	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (!new_ht-.array)
	{
		fprintf(stderr, "calloc error\n");
		free(new_ht);
		exit(EXIT_FAILURE);
	}
	return new_ht;
}
