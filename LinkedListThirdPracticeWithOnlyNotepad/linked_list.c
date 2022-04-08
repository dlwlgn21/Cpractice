#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void insert_front(node_t** head, int value)
{
	node_t** pp;
	node_t* new_node;
	pp = head;
	new_node = malloc(sizeof(node_t));
	assert(new_node != NULL);
	new_node->value = value;
	new_node->next = *pp;
	*pp = new_node;
}

void insert_ordered(node_t** head, int value, mode_t mode)
{
	node_t** pp;
	node_t* new_node;
	pp = head;
	new_node = malloc(sizeof(node_t));
	assert(new_node != NULL);
	new_node->value = value; 
	while (*pp != NULL) {
		if (mode == Acscending) {
			if ((*pp)->value >= value) {
				break;
			}
		} else {
			if ((*pp)->value <= value) {
				break;
			}
		}
		
		
	
		pp = &(*pp)->next;
	}
	new_node->next = *pp;
	*pp = new_node;
}

int has_value(node_t* head, int value)
{
	node_t* p = head;
	assert(p != NULL);
	while (p != NULL) {
		if (p->value == value) {
			return TRUE;
		}
		p = p->next;
	}

	return FALSE;
	
}

int delete_node(node_t** head, int value)
{
	node_t** pp = head;
	assert(*pp != NULL);
	
	while (*pp != NULL) {
		if ((*pp)->value == value) {
			node_t* temp = *pp;
			*pp = (*pp)->next;
			free(temp);
			return TRUE;
		}
		
		pp = &(*pp)->next;
	}
	
	return FALSE;
}

void print_all_node(node_t* head)
{
	node_t* p = head;
	assert(p != NULL);
	
	while (p != NULL) {
		fprintf(stderr, "node value is %d\n", p->value);
		p = p->next;
	}
	
}

void destory_list(node_t* head)
{
	node_t* p = head;
	assert(p != NULL);
	
	while (p != NULL) {
		node_t* next = p->next;
		free(p);
		p = next;
	}	
	fprintf(stderr, "all node delete SUCCESS!!\n");
}
