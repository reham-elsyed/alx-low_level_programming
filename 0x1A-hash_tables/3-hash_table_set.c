#include "hash_tables.h"

/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_value;
	hash_node_t *new_node;
	hash_node_t *temp;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (key == NULL || key[0] == '\0')
	return (0);

	new_value = malloc(strlen(value) + 1);

	if (new_value == NULL)
	{
		return (0);
	}
	strcpy(new_value, value);



	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		temp = ht->array[index];
		new_node->next = temp;
		ht->array[index] = new_node;
	}
	return 1;
}
