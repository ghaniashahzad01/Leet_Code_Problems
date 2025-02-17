#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int index = i;

        for(int j = i+1 ; j < n; j++)
        {
            if(arr[j] < arr[index])
            {
                index = j;
            }

            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;

        }
    }
}
int main()
{
    int arr[] = {45,90,23,7,6,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr,n);
    
    cout<<"Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}