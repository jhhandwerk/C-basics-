#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* next;
};

typedef struct node node_t;

void printList(node_t *head){
    node_t *temporary = head;

    while (temporary != NULL){
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    }
}

node_t *create_new_node(int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

int main(){
    node_t *head = NULL;
    node_t *tmp;

    for(int i=0; i < 25; i++){
        tmp = create_new_node(i);
        tmp->next = head;
        head = tmp;
    }
    printList(head);
    return 0;
}

// int main(){
//     node_t *head;
//     node_t *tmp;

//     tmp = create_new_node(32);
//     head = tmp;
//     tmp = create_new_node(64);
//     tmp->next = head;
//     head = tmp;
//     tmp = create_new_node(82);
//     tmp->next = head;
//     head = tmp;

//     printList(head);

//     return 0;
// }

