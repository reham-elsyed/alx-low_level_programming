#include "hash_tables.h"
/**
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned char *new_key;

	new_key = hash_djb2(key);

	return (new_key % size);
}
