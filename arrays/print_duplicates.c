#include <stdio.h>

void duplicate(int num[], int n)
{
    int i, j, k;
    int count;
    int found;
    int rep[10];
    int rep_count = 0;

    for(i = 0; i < n - 1; i++)
    {
        found = 0;

        /* Check if already printed */
        for(k = 0; k < rep_count; k++)
        {
            if(num[i] == rep[k])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

        count = 0;

        /* Search for duplicates */
        for(j = i + 1; j < n; j++)
        {
            if(num[i] == num[j])
            {
                count++;
            }
        }

        if(count > 0)
        {
            printf("%d ", num[i]);

            /* Store in rep[] */
            rep[rep_count] = num[i];
            rep_count++;
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

    printf("Duplicate elements: ");

    duplicate(arr, 10);

    return 0;
}
