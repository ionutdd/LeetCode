//https://leetcode.com/problems/intersection-of-two-linked-lists/
//40 minutes

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = getLinkedListLength(headA);
        int lenB = getLinkedListLength(headB);
        
        int diff = abs(lenA - lenB);

        if (lenA > lenB) {
            while (diff--)
                headA = headA->next;
        } else {
            while (diff--)
                headB = headB->next;
        }
        
        while (headA && headB) {
            if (headA == headB)
                return headA;
            
            headA = headA->next;
            headB = headB->next;
        }
        
        return nullptr;
    }
    
private:
    int getLinkedListLength(ListNode* head) {
        int length = 0;
        while (head) {
            length++;
            head = head->next;
        }
        return length;
    }
};
