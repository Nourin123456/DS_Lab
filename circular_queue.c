#include<stdio.h>
#define SIZE 5
int queue [SIZE];
int front=-1,rear=-1;
void enqueue(int value){
	if((front== 0&& rear==SIZE -1)||(front==rear+1)){
		printf("\nQueue Overflow\n");
	}else{
		if(front==-1)
			front=0;
		rear=(rear+1)%SIZE;
		queue[rear]=value;
		printf("\n inserted %d\n",value);
	}
}
void dequeue(){
	if(front==-1){
		printf("\n Queue Underflow\n");
	}else{
		printf("\n Deleted %d\n",queue[front]);
		if(front==rear){
			front=rear=-1;
		}else{
			front=(front+1)%SIZE;
		}
	}
}
void display(){
	if(front==-1){
		printf("\n Queue is Empty\n");
	}else{
		int i=front;
		printf("\n Queue Elements:");
		while(i!=rear){
			printf("%d",queue[i]);
			i=(i+1)%SIZE;
		}
		printf("%d\n",queue[i]);
	}
}
int main(){
	int choice,value;
	while(1){
		printf("\n--Circular Queue--");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\n Enter your choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the value to insert:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				printf("\nInvalid choice!n");
			}
	}
}

