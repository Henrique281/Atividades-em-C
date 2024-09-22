#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro: Falha ao alocar memória para o novo nó.\n");
        exit(1);
    }
    
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    struct Node *head = NULL;
    int num, i;

    printf("Digite 10 números:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        insertAtBeginning(&head, num);
    }

    struct Node *current = head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(", ");
        }
        current = current->next;
    }
    printf("\n");

    while (head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}