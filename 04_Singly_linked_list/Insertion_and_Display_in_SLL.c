#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>
struct Node {
    int data;
    struct Node *next;
};
void insert_at_end(struct Node **head, int value) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display_list(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insert_at_beginning(struct Node **head, int value) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}



void insert_after_node(struct Node *prev_node, int value) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

int main()
{
    struct Node *head = NULL;

    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    display_list(head);

    insert_at_beginning(&head, 5);
    display_list(head);

    insert_after_node(head->next, 15); // Insert after the second node
    display_list(head);
return 0 ;
}