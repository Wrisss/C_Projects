#include <stdio.h>
#include <stdlib.h>

    struct Node {
        int data;
        struct Node* next;
    };

int main(){

    struct Node* head = malloc(sizeof(*head));
    struct Node* second = malloc(sizeof(*head));
    struct Node* third = malloc(sizeof(*head));
    struct Node* fourth = malloc(sizeof(*head));
    struct Node* tail = malloc(sizeof(*head));

    head->data = 10;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = tail;

    tail->data = 14;
    tail->next = NULL;

    // use a cursor variable to not lose the head reference
    struct Node* cursor = head;

    while (cursor != NULL){
    printf("DATA: %d\n", cursor->data);
        cursor = cursor->next;
    }

    printf("\n");
    // INSERT NODE AT HEAD OF THE LINKED LIST ALREAY CREATED
    // create the node
    struct Node* new_head = malloc(sizeof(*head));

    /* this instruction assign new_node to the same address of the head of the list
    new_node = head;
    printf("Address: %p %p", new_node, head);
    */

    new_head->data = 9;
    // attach the new_node to the head
    new_head->next = head;

    // traverse the list again after the insertion of a new node at the start
    cursor = new_head;
    while (cursor != NULL){
        printf("DATA: %d\n", cursor->data);
        cursor = cursor->next;
    }

    printf("\n");

    // INSERT NEW NODE AT THE END OF THE LIST ALREAYD CREATED
    // create new node
    struct Node* new_tail = malloc(sizeof(*head));

    new_tail->data = 15;
    new_tail->next = NULL;

    // detach the previous tail and attach it to the new one
    tail->next = new_tail;

    cursor = new_head;
    while (cursor != NULL){
        printf("DATA: %d\n", cursor->data);
        cursor = cursor->next;
    }

return 0;}