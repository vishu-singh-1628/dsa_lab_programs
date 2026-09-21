#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;

};
void display_list(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head ;
    struct Node *second ;
    struct Node *third ;
    struct Node *fourth ;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next =second;
    
    second->data = 20;
    second->next =third;
    third->data = 30;
    third->next =fourth;
    fourth->data = 40;
    
    fourth->next =NULL;
    display_list(head);
    //deletion at the end
    struct Node *temp = head;
    while(temp->next->next != NULL){
        temp= temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    display_list(head);




    

return 0 ;
}