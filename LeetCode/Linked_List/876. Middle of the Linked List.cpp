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
    int length(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        if(head->next->next==NULL)
        {
            return head->next;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;



        // int len=length(head);
        // int ans=len/2;
        // int count=0;
        // ListNode* temp=head;
        // while(count<ans)
        // {
        //     temp=temp->next;
        //     count++;
        // }
        // return temp;
    }
};
