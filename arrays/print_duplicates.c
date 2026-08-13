#include <stdio.h>

void duplicate(int arr[], int n)
{

	int repeated[n], rep_count = 0;
        int i, j, k, count, found;
	    for(i = 0; i < n; i++){
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > 1)
        {
            found = 0;

            for(k = 0; k < rep_count; k++)
            {
                if(arr[i] == repeated[k])
                {
                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                repeated[rep_count] = arr[i];
                rep_count++;
            }
        }
    }

    printf("repeated elements:");

    for(i = 0; i < rep_count; i++)
    {
        printf("%d ", repeated[i]);
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

    printf("Duplicate elements: ");

    duplicate(arr, 10);

    return 0;
}
