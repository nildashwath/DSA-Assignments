#include <stdio.h>


int linear_search(int arr[], int size, int key)
{
    if (size == 0) {
        return -1;
    }

    if (arr[size - 1] == key) 
    {
        return size - 1;
    }

    return linear_search(arr, size - 1, key);
}

int main()
{
    int arr[] = { 5, 15, 6, 9, 4 };
    int key = 4;
    int index
        = linear_search(arr, sizeof(arr) / sizeof(int), key);
    if (index == -1) {
        printf("Key not found!\n");
    }
    else 
    {
        printf("Key found at index = %d\n",key);
       
        printf("comparisons = %d\n",index);
    }
    return 0;
}
