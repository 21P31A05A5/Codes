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
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        ListNode* root = new ListNode(0);
        root->next = head;
        unordered_map<int, ListNode*> m; // sum, ListNode*
        m.insert({0, root});
        
        int sum = 0;
        
        while (head != NULL) {
            sum += head->val;
            unordered_map<int, ListNode*>::iterator it = m.find(sum);
            
            if (it == m.end()) { 
                m[sum] = head; 
            }
            else { 
                int tmpSum = sum;
                ListNode* node = m[sum]->next;
                while(node != head) {
                    tmpSum += node->val;
                    if(tmpSum != sum) m.erase(tmpSum);
                    node = node->next;
                }
                m[sum]->next = head->next;
            }

            head = head->next; 
        }

        return root->next;
    }
};
