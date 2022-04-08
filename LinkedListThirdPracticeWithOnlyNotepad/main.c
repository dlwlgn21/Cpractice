#include "linked_list.h"

int main(void)
{
	node_t* head = NULL;
	insert_ordered(&head, 1, Acscending);
	insert_ordered(&head, 5, Acscending);
	insert_ordered(&head, 2, Acscending);
	insert_ordered(&head, 7, Acscending);
	insert_ordered(&head, 9, Acscending);

	delete_node(&head, 2);
	print_all_node(head);
	
	delete_node(&head, 3);
	delete_node(&head, 1);
	print_all_node(head);

	delete_node(&head, 9);
	print_all_node(head);
	destory_list(head);
	return 0;
}
