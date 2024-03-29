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
private:

    bool check(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size()-1;

        while(s <= e)
        {
            if(arr[s] != arr[e])
            {
                return false;
            }

            s++;
            e--;
        }

        return true;
    }
public:



    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)
        {
            return true;
        }

        ListNode* temp = head;
        vector<int>arr;

        //copy the LL data into and array 
        while(temp != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }

       //check if the array is palindrome cause data of LL and array is same
        return check(arr);

    }
};
