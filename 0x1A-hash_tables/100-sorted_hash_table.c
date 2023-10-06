#include "hash_tables.h"

/**
 * print_ht - prints hash table state
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void print_ht(shash_table_t *ht)
{
	printf("SHEAD: [%s]:[%s]\n", ht->shead->key, ht->shead->value);
	printf("STAIL: [%s]:[%s]\n", ht->stail->key, ht->stail->value);
}


/**
 * shash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to hash table type
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (!size)
		return (NULL);
}
