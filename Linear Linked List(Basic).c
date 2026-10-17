#include <stdio.h>
#include <stdlib.h>
struct Node {
   int data;
   struct Node *ptr;
};

int main(){
	struct Node *fnode,*start = NULL,*snode;
	fnode = (struct Node *)malloc(sizeof(struct Node));
	
	printf("Enter fnode data: ");
	scanf("%d",&fnode->data);
	fnode->data;
	fnode->ptr=NULL;
	start = fnode;
  
  	printf("Enter snode data: ");
	scanf("%d",&snode->data);
	snode->data;
  	snode->ptr=NULL;
  	fnode->ptr=snode;
  	
  	printf("fnode: %d\n",fnode->data);
  	printf("snode: %d\n",snode->data);
  	
  	return 0;
}

