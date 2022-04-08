#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define TRUE (1)
#define FALSE (0)
#define NULL ((void*)0)
typedef enum mode {
	Acscending,
	Decscending
} mode_t;

typedef struct node {
	int value;
	struct node* next;
} node_t;

void insert_front(node_t** head, int value);

void insert_ordered(node_t** head, int value, mode_t mode);

int has_value(node_t* head, int value);

int delete_node(node_t** head, int value);

void print_all_node(node_t* head);

void destory_list(node_t* head);

#endif /* LINKED_LIST_H */
