//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//30 minutes

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int k = 0;
        if (n == 1)
        {
            if (current == nullptr || current->next == nullptr) {
                delete current;
                return nullptr;
            }
            
            while (current->next->next != nullptr) {
                current = current->next;
            }
            
            delete current->next;
            current->next = nullptr;
        
            return head;
        }
        while (current != nullptr)
        {
            k++;
            current = current->next;
        }
        if (n == k)
        {
            ListNode* NewHead = head->next;
            delete head;
            return NewHead;
        }
        ListNode* ans = head;
        int nr = 0;
        while (ans != nullptr)
        {
            nr++;
            if (nr == k - n)
                {
                    ListNode* Temp = ans->next;
                    ans->next = ans->next->next;
                    delete Temp;
                }
            else
                ans = ans->next;
        }
        return head;
    }
};
