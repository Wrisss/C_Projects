#include <stdio.h>
#include <stdlib.h>

    // creating the structure
    struct Node {
        int data;
        struct Node* next;
    };

    // prototype or signature of the function
    struct Node* build_node(int);

int main(){

    struct Node* node1 = build_node(10);
    struct Node* node2 = build_node(20);
    node1->next = node2;
    node2->next = NULL;

    struct Node* cur = node1;

    while (cur != NULL){
        printf("DATA: %d\n", cur->data);
        cur = cur->next;
    }

    printf("%p %p %p", (void*)node1, (void*)&node1, (void*)&(node1->data));

return 0;}

    // function build_node implementation
    struct Node* build_node(int data){
        struct Node* new_node = malloc(sizeof(*new_node));
        new_node->data = data;
    return new_node;}