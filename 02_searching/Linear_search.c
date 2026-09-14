#include<stdio.h>
#include<stdbool.h>

bool linear_search(int *arr, int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    if(linear_search(arr, size, target))
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
