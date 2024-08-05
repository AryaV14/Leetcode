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
    ListNode* middleNode(ListNode* head) {
        ListNode* l =new ListNode();
        l=head;
        int count=0,s=0;
        while(l!=NULL)
        {
            count++;
            l=l->next;
        }
        l=head;
        while(s<((count/2)+1)-1)
        {
            s++;
            l=l->next;
        }
        return l;
    }
};