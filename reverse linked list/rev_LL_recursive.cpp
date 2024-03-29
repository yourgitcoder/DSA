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

    void solve(ListNode* &head,ListNode* &curr,ListNode* &prev)
    {
        
        if(curr == NULL )
        {
            head = prev;
            return;
        }
        solve(head,curr->next,curr); //calling recursion to solve for the next nodes 
	  // all next nodes reversed so now reverse the curr node
        curr->next=prev; 
        
    }


    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
       
        solve(head, curr, prev );
        return head;
    }
};
