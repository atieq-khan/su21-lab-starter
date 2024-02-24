#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {

    node *fast_ptr = head;
    node *slow_ptr = head;

    // Traverse the list
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        // Move fast_ptr by two nodes
        fast_ptr = fast_ptr->next->next;

        // Move slow_ptr by one node
        slow_ptr = slow_ptr->next;

        // Check if fast_ptr and slow_ptr point to the same node (cycle detected)
        if (fast_ptr == slow_ptr) {
            return 1;  // Cycle detected
        }
    }
    // No cycle found
    return 0;
}
