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

void searching(){
    struct Node *temp = start;
    
    int ele,pos = 1;
    bool condition = false;

    if(temp == NULL){
        printf("Empty Linked List");
        return;
    }

    printf("Enter Element To Be Searched -> ");
    scanf("%d",&ele);

    

    while(temp != NULL){
        if(temp->data == ele){ 
            printf("Element Found at Address %d\n",pos);
            condition = true;
            break;
        }
        temp = temp->next;    
        pos++;

    }

    if(condition != true) printf("Element Not Found\n");
}

void insert_position(){
    int pos,count = 0;
    struct Node *temp,*temp1,*new_node;

    

    temp = start;
    if(temp == NULL){
        printf("Empty Linked List\n");
        return;
    }
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    printf("Total Nodes -> %d\n",count);

    

while(1){
    printf("Enter Position(1 to %d) -> ",count);
    scanf("%d",&pos);

    if(pos > count+1 || pos < 1){
        printf("Invalid Position (1 to %d)",count);
    }
    else{ 
        break;
    }
    }

    new_node = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter Value in Node -> ");
    scanf("%d",&new_node->data);

    if(pos == 1){
        new_node->next = start;
        start = new_node;

        printf("Element Added Successfully At Position -> (%d)\n",pos);
    }
    else{
        temp1 = start;

        for(int i = 1;i < pos-1;i++){
            temp1 = temp1->next;
        }

        new_node->next = temp1->next;
        temp1->next = new_node;

        printf("Element Added Successfully At Position -> (%d)\n",pos);
    }


    
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

void delete_Last_node(){
    struct Node *temp,*temp1;

    temp = start;
    if(temp == NULL){
        printf("LL EMPTY\n");
        return;
    }
    else{
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = NULL;
    free(temp1);

    printf("Last Node Deleted\n");
}

}

void delete_position(){
    int pos,count = 0;

    struct Node *temp,*temp1;
    temp = start;

    if(temp == NULL){
        printf("Empty LL\n");
        return;
    }
    else{
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
    }

    while(1){
        printf("Enter position of element (1 to %d) -> ",count);
        scanf("%d",&pos);

        if(pos < 1 || pos > count)
        {
            printf("Invalid Position (1 to %d)",count);
        }
        else break;
    }

    if(pos == 1){
        temp = start;
        start = temp->next;
        free(temp);
        printf("Deletion Successfull\n");
    }
    else{
        temp = start;

        for(int i = 1;i < pos-1;i++)
        {
            temp = temp->next;
        }

        temp1 = temp->next; // temp1 got the address of deleting Node
        temp->next = temp1->next;
        free(temp1);

        printf("Deletion Successfull\n");

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
        printf("1 Create list\n2 Insert Node at First Position\n3 Search An Element\n4 Insert At Any Position \n5 Display Linked List\n6 Delete First Node\n7 Delete Last Node\n8 Delete Element at Any Position\n9 Exit\n");
        printf("Enter Number -> ");
        scanf("%d",&choice);

        if(choice == 1) create_Node();
        else if(choice == 2) first_pos();
        else if(choice == 3) searching();
        else if(choice == 4) insert_position();
        else if(choice == 5) display();
        else if(choice == 6) delete_first_node();
        else if(choice == 7) delete_Last_node();
        else if(choice == 8) delete_position();
        else if(choice == 9){ 
            printf("Ending the program\n");
            break;
            }
        else printf("Invalid Number\n");
    }



    return 0;


}