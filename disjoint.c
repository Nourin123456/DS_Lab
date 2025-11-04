#include <stdio.h>
#define MAX 10
int parent[MAX];
void makeset(int n){
	for(int i=0;i<n;i++){
		parent[i]=i;
	}
}
int find(int x){
	if (parent[x]==x)
		return x;
	else
		return find(parent[x]);
}
void unionSet(int x,int y){
	int rootx=find(x);
	int rooty=find(y);
if(rootx!=rooty){
	parent[rooty]=rootx;
	printf("union done %d and %d are now connected\n",x,y);
}
else
{
	printf("%d and %d are already in the same set.\n",x,y);
}
}
void display(int n){
	printf("\n parent array:/n");
	for(int i=0;i<n;i++){
		printf("element %d->parent %d\n",i,parent[i]);
	}
}
int main(){
	int n,x,y,choice;
	printf("Enter number of elements(max %d):",MAX);
	scanf("%d",&n);
	makeset(n);
do{
	printf("\nMenu:\n");
	printf("1.Union\n");
	printf("2.Find\n");
	printf("3.Display parent array\n");
	printf("4.Exit\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter two elements to union:");
			scanf("%d %d",&x,&y);
			unionSet(x,y);
			break;
		case 2:
			printf("Enter elements to find representative:");
			scanf("%d",&x);
			printf("Representative of %d is %d\n",x,find(x));
			break;
		case 3:
			display(n);
			break;
		case 4:
			printf("Exiting....\n");
			break;
		default:
			printf("Invalid choice!\n");
		}
}
while(choice!=4);
	return 0;
}

