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
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* fwd = NULL;

        while(curr!=NULL)
        {
            fwd = curr->next;

		
            curr->next = prev; //reversing the link

            prev = curr;
            curr = fwd;

        }

        return prev;

    }
};
