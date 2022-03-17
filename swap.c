#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;

    struct Node* next;
};

void pairWiseSwap(struct Node** head)
{

    if (*head == NULL || (*head)->next == NULL)

        return;


    struct Node* prev = *head;

    struct Node* curr = (*head)->next;


    *head = curr;


    while (1) {

        struct Node* next = curr->next;

        curr->next = prev;


        if (next == NULL || next->next == NULL) {

            prev->next = next;

            break;

        }


        prev->next = next->next;

        prev = next;

        curr = prev->next;

    }
}

void add(struct Node** head_ref, int new_data)
{

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


    new_node->data = new_data;


    new_node->next = (*head_ref);


    (*head_ref) = new_node;
}


void printList(struct Node* node)
{

    while (node != NULL) {

        printf("%d ", node->data);

        node = node->next;

    }
}

int main()
{

    struct Node* start = NULL;
    add(&start, 8);

    add(&start, 7);

    add(&start, 6);

    add(&start, 5);

    add(&start, 4);

    add(&start, 2);

   add(&start, 2);

  add(&start, 1);

    printf("\n Linked list before calling  pairWiseSwap() ");

    printList(start);


    pairWiseSwap(&start);


    printf("\n Linked list after calling  pairWiseSwap() ");

    printList(start);


    getchar();

    return 0;
}
