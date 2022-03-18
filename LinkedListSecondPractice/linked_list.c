#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "linked_list.h"

void insert_front(node_t** head, int value)
{
    node_t** pp = head;
    node_t* new_node = malloc(sizeof(node_t));
    assert(new_node != NULL);

    new_node->value = value;
    new_node->next = *pp;
    *pp = new_node;
}

void insert_ordered_asecending(node_t** head, int value)
{
    node_t** pp = head;
    node_t* new_node = malloc(sizeof(node_t));
    assert(new_node != NULL);
    new_node->value = value;
    
    while (*pp != NULL) {
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
    node_t* new_node = malloc(sizeof(node_t));
    assert(new_node != NULL);
    new_node->value = value;
    
    while (*pp != NULL) {
        if ((*pp)->value <= value) {
            break;
        }

        pp = &(*pp)->next;
    }

    new_node->next = *pp;
    *pp = new_node;
}

void print_all_node(node_t* head)
{
    node_t* p = head;
    size_t i = 0;
    while (p != NULL) {
        fprintf(stderr, "[%d]th node value is [%d]\n", ++i, p->value);
        p = p->next;
    }
}

int search_node(node_t* head, int value)
{
    node_t* p = head;
    while (p != NULL) {
        if (p->value == value) {
            return value;
        }
        p = p->next;
    }

    return INT_MIN;
}

void delete_node(node_t** head, int value)
{
    node_t** pp = head;

    while (*pp != NULL) {
        if ((*pp)->value == value) {
            node_t* next = (*pp)->next;
            free(*pp);
            *pp = next;
        }
        pp = &(*pp)->next;
    }

}

void destory_all_node(node_t* head)
{
    node_t* p = head;
    while (p != NULL) {
        node_t* next = p->next;
        free(p);
        p = next;
    }
    fprintf(stderr, "ALL NODE FREE SUCESS\n");

}
