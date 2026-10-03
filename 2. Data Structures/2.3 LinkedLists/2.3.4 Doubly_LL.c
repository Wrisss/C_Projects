#include <stdio.h>
#include <stdlib.h>

    struct Node{
        int data;
        struct Node* prev;
        struct Node* next;
    };

    struct Node* build_node(int);

int main(){
    
    struct Node* head = build_node(0);
    struct Node* node2 = build_node(10);
    struct Node* node3 = build_node(20);
    struct Node* node4 = build_node(30);
    struct Node* node5 = build_node(40);
    struct Node* tail = build_node(100);

    head->prev = NULL;
    head->next = node2;

    node2->prev = head;
    node2->next = node3;

    node3->prev = node2;
    node3->next = node4;

    node4->prev = node3;
    node4->next = node5;

    node5->prev = node4;
    node5->next = tail;
    
    tail->prev = node5;
    tail->next = NULL;

    struct Node* cur = head;
    
    // traverse forward
    while (cur != tail->next){
        printf("DATA: %d\n", cur->data);
        cur = cur->next;
    }

    printf("\n");
    cur = tail;

    // traverse backward
    while(cur != head->prev){
        printf("DATA %d\n", cur->data);
        cur = cur->prev;
    }

return 0;}

struct Node* build_node(int data){
    struct Node* new_node = malloc(sizeof(*new_node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
return new_node;}