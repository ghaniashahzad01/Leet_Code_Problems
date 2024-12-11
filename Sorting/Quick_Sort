#include<iostream>
using namespace std;


int partition(int arr[],int start,int end)
{
	int pos = start;
	
	for(int i = start; i <= end; i++ )
	{
		if(arr[i]<= arr[end])
		{
			int temp = arr[i];
			arr[i] = arr[pos];
			arr[pos] = temp;
			
			pos++;
		}
	}
	
	return pos - 1;
}

void quickSort(int arr[],int start,int end)
{
	if(start >= end)
	 return;
	 
	 int pivot = partition(arr,start,end);
	 
     quickSort(arr,start, pivot - 1 );
	 quickSort(arr, pivot + 1, end);
}

int main()
{
	
	int arr[] = {1,20,7,2,3,4,3};
	
	quickSort( arr,0,6);
	
	for(int i = 0; i < 7 ;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	
	
	return 0;
}