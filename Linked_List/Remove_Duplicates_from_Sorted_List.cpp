class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // If the list is empty or has only one element, return it as is.
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Pointer to traverse the list.
    ListNode* current = head;

    // Traverse the list and remove ..
    while (current != nullptr && current->next != nullptr) {
        if (current->val == current->next->val) {
            // Skip the duplicate node.
            ListNode* duplicateNode = current->next;
            current->next = current->next->next;
            delete duplicateNode;  // Optional: Free the memory of the duplicate node.
        } else {
            // Move to the next node if no duplicate.
            current = current->next;
        }
    }

    // Return the head of the modified list.
    return head;
}
    
};