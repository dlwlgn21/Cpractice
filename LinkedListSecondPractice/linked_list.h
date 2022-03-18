#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define TRUE (1)
#define FALSE (0)

typedef struct node {
    int value;
    struct node* next;
} node_t;

void insert_front(node_t** head, int value);

void insert_ordered_asecending(node_t** head, int value);

void insert_ordered_decending(node_t** head, int value);

void print_all_node(node_t* head);

int search_node(node_t* head, int value);

void delete_node(node_t** head, int value);

void destory_all_node(node_t* head);

#endif /* LINKED_LIST_H */
