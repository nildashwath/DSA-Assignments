#include<stdio.h>
#define SIZE 9

int comparisons;
int binary_search(int arr[SIZE],int key);
int rec_binary_search(int arr[SIZE],int key,int left, int right);
int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99};
    int key;

    printf("Enter the Key to Search :");
    scanf("%d",&key); // 66

    int index = binary_search(arr,key);

    if(index == -1)
        printf("Key not found !");
    else
        printf("Key found at index = %d\n",index);

        printf("comparisons = %d\n",comparisons);



    printf("\n Recursive Binary Search :\n");
    int res = rec_binary_search(arr,key,0,SIZE-1);
    if(res == -1)
        printf("Key not found !\n");
    else
        printf("Key found at index = %d\n",res);
    return 0;
}

int binary_search(int arr[SIZE],int key) // 6
{
    int left = 0, right = SIZE-1, mid;

while(left <= right) // (0 <= 8)  (5 <= 8) ( 5<=5)
{
    mid = (left + right) / 2; // 4 : 6 : 5

    comparisons++;
    if(key == arr[mid]) // (66 == 55 : no) (66 == 77 : no) (66 == 66)
    {
        return mid;
    }

    if(key < arr[mid]) // (66 < 55 : no) (66 < 77 : yes)
    {
        right = mid - 1; // 
    }
    else
    {
        left = mid + 1;
    }
}

return -1; // key not found
}

int rec_binary_search(int arr[SIZE],int key,int left, int right)
{
    int mid, res;

    if(left > right)    
        return -1;

    mid = (left + right) / 2;

    if(key == arr[mid])
        return mid;

    if(key < arr[mid])
    {
        res = rec_binary_search(arr,key,left,mid-1);
    }
    else
    {
        res = rec_binary_search(arr,key,mid+1, right);
    }

    return res;
}