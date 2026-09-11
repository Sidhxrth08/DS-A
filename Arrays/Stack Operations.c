#include<stdio.h>
#include<conio.h>
#define max_size 5

int s[max_size],top = -1;

int push(int item){
	if(top == max_size-1) printf("Stack Full \n");
	else{
		top += 1;
		s[top] = item;
		
	}
	return item;
}

void pop(){
	if(top == -1){
		printf("Stack Already Empty\n");
	}else{
		top--;
	}
}

int main(){
    
    int num,i;
    while(1){
	printf("Enter Number(1(push),2(pop),3(display),4(exit))\n");
    scanf("%d",&num);
    
    if(num == 1){
    	int ele;
    	printf("Enter Element");
    	scanf("%d",&ele);
    	push(ele);	
	}
	else if(num == 2){
		pop();
	}
	else if(num == 4){
		break;
	}
	else if(num == 3){
	for(i = 0;i <= top;i++)
	{
		printf("%d ",s[i]);
	}
	}
	else{
		printf("Invalid Number \n");
		break;
	}
   }
	
    
	return 0;	
}

