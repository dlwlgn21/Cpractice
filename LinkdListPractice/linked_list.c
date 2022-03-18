#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "linked_list.h"

void insert_front(node_t** head, int value)
{
    node_t** pp = head;
    node_t* new_node;

    new_node = malloc(sizeof(node_t));
    assert(new_node != NULL);
    new_node->value = value;
    new_node->next = *pp;
    *pp = new_node;
}

void insert_ordered_acending(node_t** head, int value)
{
    node_t** pp = head;
    node_t* new_node;
    new_node = malloc(sizeof(node_t));
    assert(new_node != NULL);
    new_node->value = value;
    while(*pp != NULL) {
        if ((*pp)->value >= value) {
            break;
        }
        pp = &(*pp)->next;
    }
    new_node->next = *pp;
    *pp = new_node;
}

void insert_ordered_decending(node_t** head, int value)
{
    node_t** pp = head;
    node_t* new_node;
    new_node = malloc(sizeof(node_t));
    assert(new_node != NULL);
    new_node->value = value;
    while(*pp != NULL) {
        if ((*pp)->value <= value) {
            break;
        }
        pp = &(*pp)->next;
    }
    new_node->next = *pp;
    *pp = new_node;    
}

int delete_node(node_t** head, int value)
{
    node_t** pp = head;
    while(*pp != NULL) {
        if ((*pp)->value == value) {
            node_t* delete_node = *pp;
            *pp = (*pp)->next;
            free(delete_node);
            return TRUE;
        }

        pp = &(*pp)->next;
    }
    return FALSE;
}

void print_all_nodes(node_t* head)
{
    node_t* p = head;
    size_t i = 0;
    while (p != NULL) {
        fprintf(stderr, "[%d]th node value [%d]\n",  ++i, p->value);
        p = p->next;
    }

}

int search_node(node_t* head, int value)
{
    node_t* p = head;
    while (p != NULL) {
        if (p->value == value) {
            return TRUE;
        }
        p = p->next;
    }
    return FALSE;
}

void destory_linked_list(node_t* head)
{
    node_t* p = head;
    while (p != NULL) {
        node_t* next = p->next;
        free(p);
        p = next;
    }
    fprintf(stderr, "IN destory_linked_list() delete SUCESS\n");

}
