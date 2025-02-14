/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Edge case: If there's only one node, return nullptr
    if (!head || !head->next) return nullptr;
    
    // Initialize slow and fast pointers
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr; // To track the previous node of slow
    
    // Move slow by 1 step and fast by 2 steps
    while (fast && fast->next) {
        prev = slow;           // Keep track of the node before the middle
        slow = slow->next;     // Move slow by one step
        fast = fast->next->next; // Move fast by two steps
    }
    
    // Delete the middle node by adjusting the previous node's next pointer
    if (prev) {
        prev->next = slow->next;
    }

    return head;
    }
};