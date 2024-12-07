#include<iostream>
using namespace std;

void BubbleSort(int arr[] , int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
		{
			if(arr[j + 1] < arr[j])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main()
{
	int arr[5] = {23,90,16,1,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	BubbleSort(arr , n);
	
	cout<<"Sorted array: ";
	for(int i = 0 ; i < n ; i++)
	{
		cout<<arr[i] <<" ";
	}
	
	
	return 0;
}