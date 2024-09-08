class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         // Create dummy nodes for the two partitions
    ListNode* lessHead = new ListNode(0);
    ListNode* greaterHead = new ListNode(0);
    
    ListNode* less = lessHead;
    ListNode* greater = greaterHead;
    
    // Traverse the original list and partition nodes
    while (head != NULL) {
        if (head->val < x) {
            less->next = head;
            less = less->next;
        } else {
            greater->next = head;
            greater = greater->next;
        }
        head = head->next;
    }
    
    // End the 'greater' list
    greater->next = NULL;
    
    // Connect 'less' list to 'greater' list
    less->next = greaterHead->next;
    
    // The head of the new list is the next of dummy node of 'less' partition
    ListNode* newHead = lessHead->next;
    delete lessHead; // Free the dummy node
    delete greaterHead; // Free the dummy node
    
    return newHead;

    }
};