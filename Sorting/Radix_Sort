#include <iostream>
#include <cmath>
#include <algorithm>

struct Node {
    int value;
    int priority;
    Node* next;

    Node(int v, int p) : value(v), priority(p), next(nullptr) {}
};

class PriorityQueueList {
private:
    Node* front;
    Node* rear;

public:
    PriorityQueueList() : front(nullptr), rear(nullptr) {}

    bool isEmpty() const {
        return front == nullptr;
    }

    void insertAtFront(int value, int priority) {
        Node* newNode = new Node(value, priority);
        newNode->next = front;
        front = newNode;
        if (!rear) rear = newNode; // Handle single node case
    }

    void insertAtRear(int value, int priority) {
        Node* newNode = new Node(value, priority);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void removeFromFront() {
        if (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            if (front == nullptr) rear = nullptr; // Handle last node removal
            delete temp;
        } else {
            std::cout << "Queue is empty. Cannot remove from front.\n";
        }
    }

    void removeFromRear() {
        if (!isEmpty()) {
            if (front == rear) { // Single node case
                delete front;
                front = rear = nullptr;
            } else {
                Node* temp = front;
                while (temp->next != rear) {
                    temp = temp->next;
                }
                delete rear;
                rear = temp;
                rear->next = nullptr;
            }
        } else {
            std::cout << "Queue is empty. Cannot remove from rear.\n";
        }
    }

    void insertSorted(int value, int priority) {
        if (isEmpty() || front->priority > priority) {
            insertAtFront(value, priority);
        } else {
            Node* newNode = new Node(value, priority);
            Node* temp = front;
            while (temp->next && temp->next->priority <= priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            if (!newNode->next) rear = newNode; // Update rear if added at the end
        }
    }

    void display() const {
        Node* temp = front;
        while (temp) {
            std::cout << temp->value << "(P:" << temp->priority << ") ";
            temp = temp->next;
        }
        std::cout << "\n";
    }

    void radixSort() {
        if (isEmpty()) {
            return;
        }

        // Find the maximum value in the queue to determine the number of digits
        int maxElement = 0;
        Node* temp = front;
        while (temp) {
            maxElement = std::max(maxElement, temp->value);
            temp = temp->next;
        }

        // Determine the number of digits in the maximum element
        int maxDigits = 0;
        while (maxElement > 0) {
            maxDigits++;
            maxElement /= 10;
        }

        // Perform sorting for each digit position
        for (int digitPos = 0; digitPos < maxDigits; ++digitPos) {
            // Buckets for digits 0-9
            Node* buckets[10] = {nullptr};
            Node* bucketTails[10] = {nullptr};

            // Distribute elements into buckets
            while (!isEmpty()) {
                Node* currentNode = front;
                removeFromFront(); // Removes the current node from the queue

                // Calculate the current digit
                int divisor = 1;
                for (int i = 0; i < digitPos; ++i) divisor *= 10;
                int digit = (currentNode->value / divisor) % 10;

                // Add to the appropriate bucket
                if (!buckets[digit]) {
                    buckets[digit] = currentNode;
                    bucketTails[digit] = currentNode;
                } else {
                    bucketTails[digit]->next = currentNode;
                    bucketTails[digit] = currentNode;
                }
                currentNode->next = nullptr;
            }

            // Reconstruct the queue by linking all buckets
            front = rear = nullptr;
            for (int i = 0; i < 10; ++i) {
                if (buckets[i]) {
                    if (!front) {
                        front = buckets[i];
                        rear = bucketTails[i];
                    } else {
                        rear->next = buckets[i];
                        rear = bucketTails[i];
                    }
                }
            }
        }
    }
};

int main() {
    PriorityQueueList pq;

    pq.insertSorted(329, 1);
    pq.insertSorted(457, 2);
    pq.insertSorted(657, 3);
    pq.insertSorted(839, 4);
    pq.insertSorted(436, 5);
    pq.insertSorted(720, 6);
    pq.insertSorted(355, 7);

    std::cout << "Before sorting:\n";
    pq.display();

    pq.radixSort();

    std::cout << "After sorting:\n";
    pq.display();

    return 0;
}