#ifndef LISTS_H
#define LISTS_H

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
/**
 * struct list_t - the singly linked list
 * @data: the data
 * @next: pointer to next node
 * @stri: malloc string
 * Description: struct for a singly linked list
 */
struct list_t
{
	char *stri;
	unsigned int data;
	struct list_t *next;
};

#endif
