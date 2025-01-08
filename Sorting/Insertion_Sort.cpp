#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
	for(int i = 1; i < n; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(arr[j] < arr[j-1])
			{
				int temp = arr[j-1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			else
			{
				break;
			}
		}
	}
}

void print(int n,int arr[])
{
	for(int i = 0; i < n; i++)
	{
		cout<<arr[i] <<" ";
	}
}

int main()
{
	int arr[] = {50,40,20,30,1};
	int n = sizeof(arr)/ sizeof(arr[0]);
	
	
	InsertionSort(arr, n);
    print(n,arr);
	
	
	return 0;
}