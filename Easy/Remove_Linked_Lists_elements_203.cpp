//https://leetcode.com/problems/remove-linked-list-elements/
//15 minutes

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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr)
            return head;

        while (head->val == val && head != nullptr)
        {
            head = head->next;
            if (head == nullptr)
                return head;
        }

        ListNode* current = head;
        while (current != nullptr && current->next != nullptr)
        {
            if (current->next->val == val)
                current->next = current->next->next;
            else
                current = current->next;
        }
        return head;
    }
};
