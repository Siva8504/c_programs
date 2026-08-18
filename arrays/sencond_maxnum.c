//A device records the temperature readings of N sensors in an integer array. The system needs to identify the second highest temperature reading without sorting the array.

//12 34 54 23 65 

#include<stdio.h>

void second_largest(int temp[],int n){
	int i,first=0,second=0;
	for(i=0;i<n;i++){
		if(temp[i]>first){
			first = temp[i];
		}
		if (temp[i] > second){
			second = temp[i];
		}
	}

	printf(" second largest temperature value : %d ", second);
}


int main(){

	int n,i;
	printf("enter no of sensor values:");
	scanf("%d",&n);

	int temp[n];
	printf("enter temperature values:");
	for(i=0;i<n;i++){
		scanf("%d ", &temp[i]);
	}

	second_largest(temp,n);
}



