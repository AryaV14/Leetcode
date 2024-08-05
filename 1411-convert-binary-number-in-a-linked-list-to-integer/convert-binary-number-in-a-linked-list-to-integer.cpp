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
    int getDecimalValue(ListNode* head) {
        ListNode* bin = head;
        int num=0,count=0;
        while(bin!=NULL)
        {
           count++;
           bin=bin->next;
        }
        bin=head;
        for(int i=count-1;i>=0;i--)
        {
            num+= (bin->val * pow(2,i));  
            bin=bin->next;      

        }
        return num;
}
};