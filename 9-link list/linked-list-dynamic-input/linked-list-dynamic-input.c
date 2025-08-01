#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

void addToEnd(int value);
void printList();

int main() {
    int input;

    printf("Enter numbers to add to the linked list (enter 0 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &input);
        if (input == 0)
            break;
        addToEnd(input);
    }

    printf("\nLinked list contents:\n");
    printList();

    return 0;
}

void addToEnd(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

void printList() {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
