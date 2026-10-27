#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    struct Node *pre;
    int data;
    struct Node *next;
} *start = NULL;

void create_Node(){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)),*temp1;

    printf("Enter Data For Node -> ");
    scanf("%d",&temp->data);
    
    temp->next = NULL;
    temp->pre = NULL; 

    if(start == NULL){
       start = temp; 
    }
    else{
       temp1 = start;

       while(temp1->next != NULL){
        temp1 = temp1->next;  
       }

       temp1->next = temp;  
       temp->pre = temp1;     
    }

    printf("New Node Created Successfully\n");
}

void first_pos(){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)),*temp1;
    temp1 = start;

    printf("Enter Data -> ");
    scanf("%d",&temp->data);
    temp->pre = NULL;
    temp->next = NULL;
    
    if(start == NULL){
      start = temp;
      printf("Node Added At First Position Successfully\n");
    }
    else{

    temp1->pre = temp;
    temp->next = temp1;

    start = temp;

    printf("Node Added At First Position Successfully\n");
    }
}

void delete_first_node(){
    struct Node *temp = start,*temp1;
    
    if(start != NULL){
    
      if(temp->next == NULL){

        start == NULL;
        free(temp);

        printf("First Node Deleted Successfully\n");
 
      }
      else{
        temp1 = temp->next;
        temp1->pre = NULL;

       start = temp1;
       free(temp);

       printf("First Node Deleted Successfully\n");
      }
    }
    else{
        printf("Linked List Already Empty\n");
    }

}

void searching(){
    struct Node *temp = start;

    if(start != NULL){
        int n;
    bool condition = false;
    printf("Search Number -> ");
    scanf("%d",&n);

    while(temp != NULL){
        if(temp->data == n){
            printf("Number Found At Address (%d)\n",temp);
            condition = true;
            break;
        }
        temp = temp->next;
    }

    if(condition != true) printf("Number Not Found\n");
    }
    else{
        printf("Linked List Empty\n");
    }
}

void display(){
    struct Node *temp = start;

    if(start != NULL){
        while(temp != NULL){
        printf("%d <-> ",temp->data);

        temp = temp->next;
    }
    printf("NULL\n");
    }
    else{
        printf("Linked List Empty\n");
    }

}

int main(){
    int choice;

    while(1){
    printf("1 Create list\n");
    printf("2 Inset Node at First Position\n");
    printf("3 Delete First Node\n");
    printf("4 Search Number\n");
    printf("5 Display Linked List\n");
    printf("6 Exit\n");
    printf("Enter Number -> ");
    scanf("%d",&choice);

    if(choice == 1) create_Node();
    else if(choice == 2) first_pos();
    else if(choice == 3) delete_first_node();
    else if(choice == 4) searching();
    else if(choice == 5) display();
    else if(choice == 6){ 
            printf("Ending the program\n");
            break;
            }
    else printf("Invalid Number\n");       
    }
    return 0;
}