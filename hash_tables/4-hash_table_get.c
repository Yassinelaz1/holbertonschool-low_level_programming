#include "hash_tables.h"
/**
 * hash_table_get - look for key in hash table
 * @ht: pointer
 * @key: key
 * Return: char value or  NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *p = NULL;
	unsigned int i;

	if (ht && key)
	{
		i = key_index((unsigned char *)key, ht->size);
		p = ht->array[i];
		if (p == NULL)
			return (NULL);
		while (strcmp(p->key, key) != 0)
			p = ptr->next;
		return (p->value);
	}
	return (NULL);
}
