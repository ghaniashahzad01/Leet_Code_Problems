#include<iostream>
#include <vector>
using namespace std;


void merge(int arr[], int start, int mid, int end)
{
	vector<int> temp (end - start + 1);
	
	int left = start;
	int right = mid + 1;
	int index = 0;
	
	while(left <= mid && right <= end)
	{
		if(arr[left] <= arr[right])
		{
			temp[index] = arr[left];
			index++;
			left++;
		}
		
		else
		{
			temp[index] = arr[right];
			index++;
			right++;
		}
	}
	
	while(left<= mid)
	{
	        temp[index] = arr[left];
			index++;
			left++;
	}
	while(right<= end)
	{
		temp[index] = arr[right];
		index++;
		right++;
	}
	
	 index = 0;
	
	while(start<= end)
	{
		arr[start] = temp[index];
		start++;
		index++;
	}
}

void MergeSort(int arr[],int start, int end)
{
	if(start == end)
	  return;
	
	int mid = (start + end)/2;
	
	
	MergeSort(arr,start,mid); //for left side
	MergeSort(arr,mid + 1,end); //for right sideff
	
	merge(arr, start, mid, end);
	
}



int main()
{
	
	int arr[] = {78,45,67,23,56,9,12,43};
	
	MergeSort(arr,0,7);
	
	for(int i = 0; i < 8 ;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	
	
	return 0;
}