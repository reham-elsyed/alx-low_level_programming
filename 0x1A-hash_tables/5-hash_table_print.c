#include "hash_tables.h"

/**
 *hash_table_print- function to print hash table
 *@ht: input table
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

	current = ht->array[i];

	while (current != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->next;
	}
	}
	printf("}\n");
}
