#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int value)
	{
		data = value;
		next = nullptr;
	}
};

void BubbleSort(Node* head)
{
	if(head == nullptr) //List are empty, return
	   return;
	   
	   
	bool swapped;
	do{
	    swapped = false;
		Node* current = head;
		
		while(current!=nullptr && current->next!=nullptr)
		{
			if(current->data < current->next->data)
			{
				int temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
				
		         swapped = true;
				
			}
			current = current->next;
			
		}
		
		
	}while(swapped);
	   
}

void print(Node* head)
{
	Node* current = head;
	while(current != nullptr)
	{
		cout<<current->data<<" ";
		current = current->next;
	}
}


int main()
{
	Node* head = new Node(2);
	head->next = new Node(90);
	head->next->next = new Node(12);
	head->next->next->next = new Node(34);
	head->next->next->next->next = new Node(1);
	
	BubbleSort(head);
	cout<<"Sorted Array: ";
	print(head);
		
	return 0;
}