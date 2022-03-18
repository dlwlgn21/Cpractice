#include <stdio.h>
#include "linked_list.h"

int main(void)
{
    node_t* head = NULL;
    insert_ordered_decending(&head, 2);
    insert_ordered_decending(&head, 1);
    insert_ordered_decending(&head, 5);
    insert_ordered_decending(&head, 12);

    print_all_node(head);

    delete_node(&head, 12);
    fprintf(stderr, "\nafter delete value 12 node\n");
    print_all_node(head);


    destory_all_node(head);


    return 0;
}
