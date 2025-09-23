#include <stdio.h>
int main() {
int arr[6]={20,10,40,3,56,2},max;
max=arr[0];
for(int i=1; i<5; i++){
if(arr[i]>max){
max=arr[i];
}
}
printf("The maximum element in the array in: %d\n",max);
return 0;
}

