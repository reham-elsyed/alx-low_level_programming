#include "hash_tables.h"

/**
 *hash_table_get- function to get value of nodes
 *@ht: input hadh table
 *@key: input key
 *Return: value assiciated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)

		return (current->value);
		current = current->next;
	}
		return (NULL);
}
