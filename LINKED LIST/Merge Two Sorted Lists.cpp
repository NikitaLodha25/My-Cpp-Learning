//You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* head=dummy;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        while(l1!=NULL && l2!=NULL){
            if(l1->val < l2->val){
                ListNode* temp=new ListNode(l1->val);
                dummy->next=temp;
                l1=l1->next;
            }
            else{
                ListNode* temp=new ListNode(l2->val);
                dummy->next=temp;
                l2=l2->next;
            }
            dummy=dummy->next;
        }
        if(l1!=NULL){
            dummy->next=l1;
        }
        if(l2!=NULL)
            dummy->next=l2;
        
        return head->next;
    }
};