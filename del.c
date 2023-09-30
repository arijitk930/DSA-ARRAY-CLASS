#include <stdio.h>
void delete(int x, int arr[], int p)
{
    if (p < 0 || p >= x + 1)
    {
        printf("Invalid input.");
    }
    else
    {
        for (int i = p - 1; i < x - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
int main()
{
    int size, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index from which you want to delete the element: ");
    scanf("%d", &pos);
    delete (size, arr, pos);
    printf("Updated array is: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}