// Array with bubble sort

#include <stdio.h>
//bubble sort 
void sort(int arr[], int size)
{
    for (int i; i < size ; i++)
    {
        for (int j; j < size ; j++)
        {
            if(arr[j] > arr[j+1]) {
                int temp =  arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print(int arr[], int size) 
{
    for(int i =1; i<=size; i++) 
    {
        printf(" \n %d ",i);
    }
}
int main()
{
    int i;
    int arr[] = {5, 4, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]); // to calculate the size of array
    // printf("\n %d",arr);
    sort(arr,size);
    print(arr,size);
    return 0;
}

