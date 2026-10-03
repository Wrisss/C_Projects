#include <stdio.h>
#include <stdlib.h>

    struct Node{

        int data;
        struct Node* next;
    };

int main(){

    struct Node *head = malloc(sizeof(*head));

    if(head == NULL){
        printf("Memory Allocation Error");
        return -1;
    }

    head->data = 10;
    head->next = NULL;
//  (*head).data = 10; different syntax same output of the instruction above
/*  the expression  " *(head).data " is wrong because the '.' operator can only accesses structures,
    futhermore '.' operator has precedence over the '*' operator. So the expression became: 
    *((head).data) which is error-compiled because access through '.' of pointers is forbidden in C. 
    if node is a struct, NOT A POINTER, the "." correctly access the data of node.data */  
    
    printf("Data: %d\n", head->data);
    printf("Data: %d", (*head).data);

return 0;}