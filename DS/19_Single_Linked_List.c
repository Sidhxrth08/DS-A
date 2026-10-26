#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct Node{
    int data;                     
    struct Node *next;
} *start = NULL;

void create_Node(){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)),*temp1;

    temp->next = NULL;

    printf("Enter Element for Node -> ");
    scanf("%d",&temp->data);

    if(start == NULL){
        start = temp;
    }
    else{
        temp1 = start;
        while(temp1->next != NULL)
        temp1 = temp1->next;
        temp1->next = temp;
    }
}

void first_pos(){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter Number for New Node :");
    scanf("%d",&temp->data);

    temp->next = start;
    start = temp;

    printf("New Node Inserted At First Position Successfully\n");
}

void delete_first_node(){
    struct Node *temp;

    temp = start;
    if(temp == NULL){
        printf("LL EMPTY\n");
        return;
    }
    else{
    start = temp->next;
    free(temp);

    printf("First Node Deleted\n");
    }
}

void display(){
    struct Node *temp;
    temp = start;

    if(temp == NULL) printf("Empty Linked List\n");
    else{
    while(temp != NULL)
    {
     printf("%d -> ",temp->data);
     temp = temp->next;   
    }
    printf("NULL\n");
    }
}

int main(){
    int choice;

    while(1){
        printf("1 (Create Node) 2 (Insert Node at first Position) 3 (Delete Node at first position) 4 (Display Linked List) 5 (Exit)\n");
        printf("Enter Number -> ");
        scanf("%d",&choice);

        if(choice == 1) create_Node();
        else if(choice == 2) first_pos();
        else if(choice == 3) delete_first_node();
        else if(choice == 4) display();
        else if(choice == 5) {
            printf("Ending the program\n");
            break;
        }
        else printf("Invalid Number\n");
    }



    return 0;


}