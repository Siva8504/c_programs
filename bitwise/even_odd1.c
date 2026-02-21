#include<stdio.h>
int main(){
	int num;
	printf("enter num");
	scanf("%d",&num);
	if(~num&1){
		printf("even");
	}
	else{
		printf("odd");
	}
}
