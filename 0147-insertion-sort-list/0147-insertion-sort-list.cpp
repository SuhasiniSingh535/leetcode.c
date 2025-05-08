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
class Solution 
{
    public:
        ListNode* insertionSortList(ListNode* head)
        {
            if(!head||!head->next)
            {
                return head;
            }
            ListNode *dummy=new ListNode(0);
            dummy->next=head;
            ListNode *cur=head;

            while(cur && cur->next)
            {
                if(cur->val<=cur->next->val)
                {
                    cur=cur->next;
                    continue;
                }
            
                ListNode *toinsert=cur->next;
                cur->next=toinsert->next;
                
                ListNode *pre=dummy;
                while(pre->next->val<toinsert->val)
                {
                    pre=pre->next;
                }
                toinsert->next=pre->next;
                pre->next=toinsert;
            }
        return dummy->next;
    }
};