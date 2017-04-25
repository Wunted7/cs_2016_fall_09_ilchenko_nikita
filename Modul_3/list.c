#include <stdio.h>
#include "list.h"
#include <string.h>

Node *head = NULL;


int get_index_element(Node* head, int n) {
    int counter = 0;
    while (counter < n && head) {
        head = head->next;
        counter++;
    }
    return head;
}

