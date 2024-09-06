class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to act as the head of the new list.
    ListNode dummy(0);
    ListNode* tail = &dummy;

    // Traverse both lists and merge them.
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // If there are remaining nodes in either list, attach them.
    if (list1 != nullptr) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    // Return the next node of the dummy node (head of the merged list).
    return dummy.next;
}

    
};