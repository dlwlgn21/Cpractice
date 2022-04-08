#include <stdio.h>
#include "linked_list.h"

int main(void)
{
    node_t* head = NULL;
    insert_ordered_acending(&head, 4);
    insert_ordered_acending(&head, 1);
    insert_ordered_acending(&head, 3);
    insert_ordered_acending(&head, 2);
    insert_ordered_acending(&head, 5);


    print_all_nodes(head);
#if 1
    fprintf(stderr, "after delete node(2)\n");
    delete_node(&head, 2);
    print_all_nodes(head);

    delete_node(&head, 2);
    fprintf(stderr, "after delete again node(2)\n");
    print_all_nodes(head);

    delete_node(&head, 3);
    fprintf(stderr, "after delete node(3)\n");

    print_all_nodes(head);
#endif

    destory_linked_list(head);



    return 0;
}
