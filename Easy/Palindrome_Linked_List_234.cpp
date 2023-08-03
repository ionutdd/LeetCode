//https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;
        

        //Step 1: Using the 2 pointers method, we find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        //Step 2: We now want to go through the 2nd part of the list in reverse, so we can use the classical method

        ListNode* current = slow;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        //Step 3: We now want to compare the first part of the list, with the 2nd part

        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;

        while(secondHalf != nullptr)
        {
            if (firstHalf->val != secondHalf->val )
                return false;

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
