#include<stdio.h>
int isPrime(int num, int divisor)
{
    if (divisor == num)
    {
        return 1;
    }
    else
    {
        if (num % divisor == 0)
        {
            return 0;
        }
        else
        {
            return isPrime(num, divisor + 1);
        }
    }
}
int main(){
	int n,result,num=1,divisor=2;
	printf("enter n:");
	scanf("%d",&n);
	while(num<=n){
		if(num<2){
			printf("not prime");
		}
		if(num>=2){
        result = isPrime(num,divisor);
		}
	
	if ( result == 1){
		printf("%d ",num);
	}
	num++;
	}



}


