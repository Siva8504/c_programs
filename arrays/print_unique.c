#include <stdio.h>

void unique(int num[], int n)
{
    int i, j;
    int count;
    for(i=0;i<n;i++){

	    count=0;
	    for(j=0;j<n;j++){
		    if(num[i]==num[j]){
			    count++;
		    }
	    }
	    if(count==1){
		    printf("%d",num[i]);
	    }
    }
}

int main()
{
    int arr[10];
    int i;
    printf("Enter 10 elements:\n");

    for( i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    unique(arr, 10);

    return 0;
}
