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
    int getLength(ListNode* head)
    {
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;

    }



    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        int cnt=0;


	// same as love babbar just that if number of nodes is less than k then no need to reverse , so return head 
        int len =  getLength(head);
        if(len<k)
        {
            return head;
        }

        while(curr!=NULL && cnt<k)
        {
            next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

            cnt++;

        }


        if(next!=NULL)
        {
        head->next= reverseKGroup(next,k);
        }
        return prev;

    }
};
