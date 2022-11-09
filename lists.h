#ifndef LISTS_H_
#define LISTS_H_

/*
 * libraries - to be included
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct sll - singularly linked list struct
 * @len: number of chars
 * @str: pointer to char str/arr
 * @next: pointer to next sll struct
 *
 * Description: sll node struct
 */
typedef struct sll
{
	char *str;
	unsigned int len;
	struct sll *next;
} list_t;

/*
 * prototypes - function protos below
 */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
char *_strcpy(char *dest, const char *src);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
