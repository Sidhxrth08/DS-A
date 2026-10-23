#include<stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

int main(){
	struct Node *first,*second,*third;
	
	first = malloc(sizeof(struct Node));
	second = malloc(sizeof(struct Node));
	third = malloc(sizeof(struct Node));
	
	printf("Enter Element for First Node -> ");
	scanf("%d",&first->data);
	
	first->next = NULL;
	
	printf("Enter Element for Second Node -> ");
	scanf("%d",&second->data);
	
	second->next = NULL;
	first->next = second;
	
	int c;
	printf("Enter Element for Third Node -> ");
	scanf("%d",&third->data);

	third->next = NULL;
	second->next = third;
	
	struct Node *start = first;
	while(start != NULL){
		printf("%d -> ",start->data);
		start = start->next;
	}
	printf("NULL\n");
	
	return 0;
	
}
