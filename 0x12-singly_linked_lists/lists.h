#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct list_s - the singly linked list
 * @len: the data
 * @next: pointer to next node
 * @str: malloc string
 * Description: struct for a singly linked list
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _stl(const char *c);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void myfunc(void) _attribute_((constructor));
void myfunc(void);

#endif
