#include <stdio.h>
#define MAX 20

void insert(int size, int x, int p, int arr[])
{
    for (int i = size - 1; i >= p; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[p] = x;
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int input;
    printf("Enter the no. you want to input: ");
    scanf("%d", &input);
    int pos;
    printf("Enter the position at which you want to insert the elememnt: ");
    scanf("%d", &pos);
    pos--;
    insert(n, input, pos, arr);
    printf("After insertion the final array will be: ");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}