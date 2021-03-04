#include <stdio.h>
// Naive method to find a pair in an array with a given sum
void findPair(int arr[], int n, int sum)
{
    int i,j;
    // consider each element except the last
    for (i = 0; i < n - 1; i++)
    {
	// start from the i'th position until the last element
	for (j = i + 1; j < n; j++)
	{
	    // if the desired sum is found, print it
	    if (arr[i] + arr[j] == sum)
	    {
		printf(" Pair found at position %d and %d", i, j);
		return;
	    }
	}
    }
    // otherwise if the pair is not found
    printf("  Pair not found  ");
}
void main()
{
    int arr[]={ 2,7,11,19};
    int sum,n;
    clrscr();
    printf(" Here are some list of integers \n ***2,7,11,19***:");
    printf("\n Target sum is 9 \n");
    sum=9;
    n = sizeof(arr)/sizeof(arr[0]);
    findPair(arr, n, sum);
    getch();
}