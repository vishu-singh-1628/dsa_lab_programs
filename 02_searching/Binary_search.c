#include<stdio.h>
#include<stdbool.h>

bool binary_search(int *arr, int size, int target)
{
    int left = 0;
    int right = size - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            return true;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    if(binary_search(arr, size, target))
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}