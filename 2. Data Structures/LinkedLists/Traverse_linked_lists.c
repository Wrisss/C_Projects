#include <stdio.h>
#include <stdlib.h>

    struct Node{
        int data;
        struct Node* next;
    };

int main(){

    struct Node *head = malloc(sizeof(*head));
    struct Node *second = malloc(sizeof(*head));
    struct Node *third = malloc(sizeof(*head));
    struct Node *fourth = malloc(sizeof(*head));
    struct Node *fifth = malloc(sizeof(*head));
    struct Node *sixth = malloc(sizeof(*head));
    struct Node *tail = malloc(sizeof(*head));

    if (head == NULL){
        return -1;
    }

    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = sixth;

    sixth->data = 60;
    sixth->next = tail;

    tail->data = 100;
    tail->next = NULL;

    struct Node* cursor = head; /* assign the same reference to another variable to not lose the original
    reference of the head node. We can use this variable to cycle through the entire list. */

        printf("%p\n", *head); 
        printf("%p\n\n", *cursor); // same reference
        printf("%p\n", &head); 
        printf("%p\n", &cursor); // different address for two different variables stored in two different places!
        printf("\n");

    while (cursor != NULL){
        printf("DATA: %d\n", cursor->data);
        cursor = cursor->next;} 
        /* this is the core logic instruction: assign the address of the next node
        to the cursor for every while iteration. Do this AFTER print the result. */


return 0;}