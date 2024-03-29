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

    



    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        

        ListNode* curr = head;

// since checking if curr & next node data or val is equal or not so we need to keep the cond. that none of them is NULL
        while(curr!= NULL && curr->next != NULL)
        {
	
		// if curr and next node are equal then delete the next node and if this is the case while loop again runs to check if again the curr node and new next node are equal if equal then again while loop runs and this continues till all nodes equal to curr nodes are deleted and while loop runs again but this time since if loop doesnt run so else loop runs and curr now moves to next node and while loop runs again to check if now the new curr node has any duplicates and so on ...

            if(curr->val == curr->next->val)
            {
                curr->next = curr->next->next;

            }

		//
            else
            {

            curr = curr-> next;
            }
        }

        return head;
    }
};
