//A security system receives a numeric access code from a device. Before processing it, the system needs to calculate the sum of all digits in the code.


#include<stdio.h>

int main(){

	int code,current_digit=0,sum=0;
	printf("enter code:");
	scanf("%d" , &code);

	while(code){

		current_digit = code%10;
		sum += current_digit;
		code /= 10;
	}

	printf("sum of digits in the code: %d" , sum);
}

