class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Function to remove all nodes with value `val`
        
    // Create a dummy node that points to the head
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    ListNode* prev = dummy;
    ListNode* curr = head;

    // Traverse through the list
    while (curr != nullptr) {
        if (curr->val == val) {
            // Skip the current node
            prev->next = curr->next;
        } else {
            // Move the prev pointer forward
            prev = curr;
        }
        // Move the curr pointer forward
        curr = curr->next;
    }
    
    // The new head is dummy->next
    head = dummy->next;

    // Delete the dummy node
    delete dummy;
    
    return head;
}

    
};