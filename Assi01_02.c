#include<stdio.h>
#define SIZE 6
#define SWAP(a,b) int temp = a; a=b; b=temp;

void selection_sort(int arr[SIZE], int *iterations, int *comparisons);
void display(int arr[SIZE]);

int main ()
{
    int arr[SIZE] = {11,22,33,44,55,66};
    int iterations = 0, comparisons= 0;

    printf("\n Before sort: \n");
    display(arr);
    selection_sort(arr,&iterations, &comparisons);
    printf("\n After sort :\n");
    display(arr);

    printf("\n Number of Passes: %d\n", iterations);
    printf("\n Number of Comparisons: %d\n", comparisons);

    return 0;
}

void selection_sort(int arr[SIZE], int *iterations, int *comparisons)
{
    int sel_pos, pos;
    *iterations = 0;
    *comparisons = 0;

    //iterations
    for(sel_pos = 0; sel_pos < SIZE-1; sel_pos++)
    {
        (*iterations)++;
        for (pos = sel_pos+1; pos < SIZE; pos++)
        {
            (*comparisons)++;
            if (arr [sel_pos]>arr[pos])
            {
                //swap
                SWAP(arr[sel_pos],arr[pos]);
            }
            
        }
        
    }
}

void display(int arr[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%4d", arr[i]);
    }
}