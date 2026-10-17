#include<iostream>
using namespace std;

#define max_size 5

int Q[max_size];
int front = -1,rear = -1;


void Enqueue(int n){
	if(rear == max_size - 1){
		cout << "Queue Already Full" << endl;
	}
	else if(front == -1 && rear == -1){
		front++;
		rear++;
		
		Q[rear] = n;
	}
	else{
		rear++;
		Q[rear] = n;
	}
	
}

void Dqueue(){
	if(front == -1 && rear == -1){
		cout << "Queue Already Empty" << endl;
	}
	else{
		cout << "Deleted Element -> "<< Q[front] << endl;
		front++;
		if(front > rear){
			front = -1;
			rear = -1;
		}
	}
}

void Display(){
	for(int i = front;i <= rear;i++)
	{
		cout << Q[i] << endl;
	}
}

int main(){
	int num = 0;
	while(1){
		cout << "Enter Number (1(Enqueue),2(Dqueue),3(Display),4(Exit)) -> ";
		cin >> num;
		
		if(num == 1){
			int n = 0;
			cout << "Enter Number to be Inserted -> ";
			cin >> n;
			Enqueue(n); 
		}
		else if(num == 2){
			Dqueue();
			 
		}
		else if(num == 3){
			Display();
		}
		else if(num == 4){
			break;
		}
		else{
			cout << "Invalid Number" << endl;
		}
	}
	
	return 0;
}
