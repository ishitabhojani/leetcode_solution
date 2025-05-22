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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: Check if there are at least k nodes ahead
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }

        // If less than k nodes, no reversal needed
        if (count < k) return head;

        // Step 2: Reverse first k nodes
        ListNode* prev = nullptr;
        curr = head;
        ListNode* next = nullptr;
        int i = 0;
        while (i < k && curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            i++;
        }

        // Step 3: Recursively call for the remaining list
        if (next != nullptr)
            head->next = reverseKGroup(next, k);

        // Step 4: Return new head of reversed group
        return prev;
    }
};