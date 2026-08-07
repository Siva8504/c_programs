#include<stdio.h>

int main(){
	int num=0,current_digit,reverse=0;
	printf("enter num:");
	scanf("%d",&num);

	while(num){
		current_digit = num%10;
		reverse =reverse * 10 + current_digit;
		num/=10;
		
	}
	printf("%d",reverse);
}

