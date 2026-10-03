#include <stdio.h>
#include <stdlib.h>

    struct Node{
        int data;
        struct Node* next;
    };

    struct Node* build_node(int);

int main(){

    int values[] = {10,20,30,40,50,60,70};
    size_t count = sizeof(values) / sizeof(values[0]);

    struct Node* head = NULL;
    struct Node* tail = NULL;

    for (size_t i = 0; i < count; i++){
        struct Node* node = build_node(values[i]);
        if (head == NULL){
        head = node;
        tail = node; // we built three references for the same address in memory: node, head, tail
                    // this behaviour preserve the reference to the head of the list.
    } else { tail->next = node; // attach the newly created node to the current tail.
        tail = node;    // the node newly created is the new tail.
        }
    }

    struct Node* cur = head;

    while (cur != NULL){
        printf("DATA: %d\n", cur->data);
        cur = cur->next;
        }
    
return 0;}

struct Node* build_node(int data){
    struct Node* new_node = malloc(sizeof(*new_node));
    new_node->data = data;
    new_node->next = NULL;
return new_node;}