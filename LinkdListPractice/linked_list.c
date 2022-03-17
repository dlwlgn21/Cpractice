#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "linked_list.h"

int insert_front(node_t** head, int value)
{
    node_t** pp = head;
    node_t* new_node;
    node_t* temp;
    new_node = malloc(sizeof(node_t));
    new_node->value = value;
    temp = *pp;
    *pp = new_node;
    new_node->next = temp;
    return TRUE;
}

int delete_node(node_t** head, int value)
{

}
void print_all_nodes(node_t* head)
{
    node_t* p = head;
    size_t i = 0;
    while (p != NULL) {
        fprintf(stderr, "[%d]th node value [%d]\n", ++i, p->value);
        p = p->next;
    }

}
int search_node(node_t* head, int value)
{

}
void destory_linked_list(node_t* head)
{
    node_t* p = head;
    size_t i = 0;
    while (p != NULL) {
        node_t* next = p->next;
        free(p);
        p = next;
    }
    fprintf(stderr, "SUCESS destory!\n");

}
