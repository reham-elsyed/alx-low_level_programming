#include "hash_tables.h"
#include <stdlib.h>
/**
 *shash_table_create - function to create hash table
 *@size: input size
 *Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 *hash_create_node - function to create node
 *@key: input key
 *@value: input value
 *Return:node
 */

shash_node_t *hash_create_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	 new_node->next = new_node->snext = new_node->sprev = NULL;
	return (new_node);
}
/**
 *add_to_sorted_list - function to sort a doubly linked list
 *@ht: hash table
 *@node: node
 *Return: void
 */
void add_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
shash_node_t *temp;

if (ht->shead == NULL && ht->stail == NULL)
{
	ht->shead = ht->stail = node;
	return;
}
temp = ht->shead;
while (temp != NULL)
{
	if (strcmp(node->key, temp->key) < 0)
	{
		node->snext = temp;
		node->sprev = temp->sprev;
		temp->sprev = node;
		if (node->sprev != NULL)
			node->sprev->snext = node;
		else
			ht->shead = node;
		return;
	}
	temp = temp->snext;
}
node->sprev = ht->stail;
ht->stail->snext = node;
ht->stail = node;
}
/**
 *shash_table_set - function to set hash table
 *@ht: table hash
 *@key: key
 *@value: value
 *Return: 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *new_node, *temp;

	if (!ht || !ht->array || key == NULL || key[0] == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = hash_create_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	add_to_sorted_list(ht, new_node);
return (1);
}
/**
 *shash_table_get - function to get a node with certain value
 *@ht: input hash table
 *@key: input key
 *Return: node value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (!ht || ht->size == 0 || ht->array == NULL || !key || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
	if (strcmp(temp->key, key) == 0)
	{
		return (temp->value);
	}
	temp = temp->next;
	}
	return (NULL);
}

/**
 *shash_table_print - function to print sorted list
 *@ht: input list
 *Return:void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

if (!ht || ht->shead == NULL)
	return;
temp = ht->shead;
printf("{");
while (temp != NULL)
{
	if (flag == 1)
		printf(", ");
	printf("'%s': '%s'", temp->key, temp->value);
	flag = 1;
	temp = temp->snext;
	}
printf("}\n");
}
/**
 *shash_table_print_rev -function to print rev
 *@ht: input array
 *Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

	if (!ht || ht->stail == NULL)
		return;
	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}
/**
 *shash_table_delete - function to delete array
 *@ht: array input
 *Return:void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;
	shash_node_t *node;
	unsigned long int i;

	if (!ht || !ht->array)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
	temp = ht->array[i];
	while (temp != NULL)
	{
		node = temp;
	temp = temp->next;
	free(node->key);
	free(node->value);
	free(node);
	}
	}
	free(ht->array);
	free(ht);
}
