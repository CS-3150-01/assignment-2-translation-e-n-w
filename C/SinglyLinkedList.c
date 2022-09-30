#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct LinkedList{
    struct Node* head;
    struct Node* tail;
};

struct LinkedList* createLinkedList(){
    struct LinkedList* list = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    list->head = NULL;
    list->tail = NULL;
}

struct Node* createNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
}

void addNode(struct LinkedList* list, int data){
    struct Node* newNode = createNode(data);
    if(list->head == NULL){
        list->head = newNode;
        list->tail = newNode;
    }else{
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void printList(struct LinkedList* list){
    struct Node* current = list->head;
    if(list->head == NULL){
        printf("List is empty.");
        return;
    }
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {

    struct LinkedList* list = createLinkedList();
    addNode(list, 1);
    addNode(list, 2);
    addNode(list, 3);
    addNode(list, 4);

    printList(list);

    return 0;
}