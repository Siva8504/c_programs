#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define N 5
int main(){
int arr[N],i,max_num=0,max_index;
srand(getpid());
for(i=0;i<N;i++){
	arr[i]=rand()%100;  //generates random numbers between 0 to 99
}
for(i=0;i<N;i++){
	if(arr[i]>max_num){
		max_num=arr[i];
		max_index=i;
	}
}
printf("max_num:%d \n",max_num);
printf("max_index:%d",max_index);
}
