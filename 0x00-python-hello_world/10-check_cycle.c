#include <stdio.h>
#include <stdlib.h>
#include <lists.h>

/* Structure for a singly linked list node */
struct listint_s {
    int n;
    struct listint_s *next;
};

/* Typedef for convenience */
typedef struct listint_s listint_t;

/**
 * check_cycle - Check if a singly linked list has a cycle.
 * @list: Pointer to the head of the linked list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list) {
    listint_t *slow = list, *fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;       /* Move one step at a time */
        fast = fast->next->next; /* Move two steps at a time */

        if (slow == fast) {
            /* The pointers meet, indicating a cycle */
            return 1;
        }
    }

    /* No cycle found */
    return 0;
}
