#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* list = NULL;

void addElement(int);
void printList();

int main() {
    int arr[3];

    printf("Enter 3 numbers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    int temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;

    for (int i = 0; i < 3; i++) {
        addElement(arr[i]);
    }

    printList();

    return 0;
}

void addElement(int new_data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = new_data;
    newNode->next = NULL;

    if (list == NULL) {
        list = newNode;
    } else {
        Node* current = list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList() {
    Node* current = list;
    printf("Linked list contents: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
