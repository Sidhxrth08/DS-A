#include<iostream>
using namespace std;

#define max_size 5
int Q[max_size];
int front = -1,rear = -1;

void Enqueue(int n){

    if(rear == max_size - 1)
    {
        cout << "Queue Already Full" << endl;
    }
    else if(rear == -1 && front == -1){
        front++;
        rear++;
        Q[rear] = n;

    }
    else{
        rear++;
        Q[rear] = n;

    }

}

void DQueue(){
    if(rear == -1 && front == -1 || front > rear){
        cout << "Queue Already Empty" << endl;

    }
    else{
        cout << "Deleted Element -> " << Q[front] << endl;
        front++;
    }
}


void Display(){
    if(front == -1 && rear == -1 || front > rear)
    {
        cout << "Queue Alreay Empty" << endl;
    }
    else{

    for(int i = front;i <= rear;i++){
        cout << Q[i] << " ";
    }
    cout << endl;

    }

}

int main(){
    Enqueue(5);
    Enqueue(10);

    Enqueue(63);

    Enqueue(47);
    Enqueue(50);

    DQueue();
    DQueue(); 
    DQueue();
  
    Display();


    

    return 0;


}