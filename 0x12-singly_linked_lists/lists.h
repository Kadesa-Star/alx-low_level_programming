#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * struct list_s - the singly linked list
 * @data: the data
 * @next: pointer to next node
 * @str: malloc string
 * Description: struct for a singly linked list
 */
typedef struct list_s
{
char *str;
unsigned int data;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
