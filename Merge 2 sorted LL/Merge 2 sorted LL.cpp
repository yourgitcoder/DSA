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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // make a dummy node and point temp to it
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;

        //run loop till one or both list ends
        while (list1 != NULL && list2 != NULL) {
        
        //list1 moves through first list and list2 through sec list and used to compare each values
            // compare both values of both lists, whichever is smaller add to temp->next and move the smaller ptr by one step
            if (list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }

            //after adding a node move temp by one step
            temp = temp->next;
        }

        //now loop ends means one list is finished or maybe both finished

        //so if list1 finished then add everything left in list 2 and vice versa if list2 finished
        if (list1 == NULL) {
            temp->next = list2;
        }
        if (list2 == NULL) {
            temp->next = list1;
        }

        //since we linked all the nodes in sorted order after dummy node so return dummy->next
        return dummy->next;
    }
};
