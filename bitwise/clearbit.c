#include<stdio.h>
int main(){
	int num,bit=2;
	printf("enter num");
	scanf("%d",&num);
	num &= ~(1<<bit);
	printf("%d",num);
}
