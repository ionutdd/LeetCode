//https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* current = head;
        ListNode* prev = nullptr;
        ListNode* nextNode = nullptr;

        while (current != nullptr)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        
        return prev;
    }
};
