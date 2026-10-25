#include<stdio.h>

#define max_capacity 5

int Q[max_capacity];
int front = -1,rear = -1,queue_size = 0;

void Enqueue(){
    int n;
    if(rear == (max_capacity - 1)) rear = (rear + 1) % max_capacity;
    if(queue_size == max_capacity){
        printf("Queue Already FULL\n");
    }
    else if(front == -1 && rear == -1){
        printf("Enter Number -> ");
        scanf("%d",&n);

        front++;
        rear++;
        Q[rear] = n;
        queue_size++;
    }
    else{
        printf("Enter Number -> ");
        scanf("%d",&n);

        rear++;
        Q[rear] = n;
        queue_size++;
    }
}

void DQueue(){
    if(front == max_capacity) front = (front + 1) % max_capacity;
    if(queue_size == 0) printf("Queue Already Empty\n");
    else{
        printf("Deleted Element -> %d",Q[front]);
        front++;
        queue_size--;     
    }
}

void Display(){
    if(queue_size == 0) printf("Queue Empty\n");
    else{
        int i = front;
        for(int count = 0; count < queue_size; count++){
            printf("%d ", Q[i]);
            i = (i + 1) % max_capacity;
    }
    printf("\n");
    }
}

int main(){
    int choice;

    while(1){
        printf("Choose Operation\n");
        printf("1 (Insert Number)\n2 (Delete Element)\n3 (Display Queue)\n4 (Exit)\n");
        printf("Enter Here -> ");
        scanf("%d",&choice);

        if(choice == 1) Enqueue();
        else if(choice == 2) DQueue();
        else if(choice == 3) Display();
        else if(choice == 4) break;
        else printf("Invalid Number\n");
    }

    return 0;
}