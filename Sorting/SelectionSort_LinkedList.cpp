#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void SelectionSort(Node* head)
{
	for(Node* i = head; i!=nullptr; i = i->next)
	{
		Node* maxNode = i;
		
		for(Node* j = i->next; j!= nullptr; j= j->next)
		{
			if(j->data > maxNode->data)
			{
				maxNode = j;
			}
		}
		
		if(maxNode !=i )
		{
			int temp = i->data;
			i->data = maxNode->data;
			maxNode->data = temp;
		}
	}
	
	
}
void print(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next; // Move to the next node
    }
    cout << endl;
}

int main() {
    // Create a linked list: 34 -> 12 -> 7 -> 120
    Node* head = new Node(34);
    head->next = new Node(12);
    head->next->next = new Node(7);
    head->next->next->next = new Node(120);

    cout << "Original Linked List: ";
    print(head);

    SelectionSort(head);

    cout << "Sorted Linked List: ";
    print(head);

    return 0;
}
