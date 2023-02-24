#include <stdio.h>
void findMinimumMaximum(int arr[], int N)
{
    int i,LOC=0,loc=0;
    int min = arr[0], max = arr[0];
    for (i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            loc=i;
        }

        if (arr[i] > max)
            {
                max = arr[i];
                LOC=i;
            }
    }
    printf("minimum element is %d and LOC is %d", min,loc+1);
    printf("\n");
    printf("maximum element is %d and LOC is %d", max,LOC+1);
}

int main()
{
    int N,i;
    printf("Enter Array size: ");
    scanf("%d",&N);

    int arr[N];
    printf("Enter Element of Array: ");
    for(i=0; i<N;i++)
        scanf("%d",&arr[i]);


    findMinimumMaximum(arr, N);
    return 0;
}
