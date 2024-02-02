#include "hash_tables.h"
/**
 *key_index - function to create key using hash function
 *@key: input key
 *@size: size of table
 *Return: new_key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned  long int new_key;

	new_key = hash_djb2(key);

	return (new_key % size);
}
