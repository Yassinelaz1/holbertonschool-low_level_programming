#include "hash_tables.h"
/**
 * hash_table_get - hat retrieves a value associated with a key.
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
			p = p->next;
		return (p->value);
	}
	return (NULL);
}
