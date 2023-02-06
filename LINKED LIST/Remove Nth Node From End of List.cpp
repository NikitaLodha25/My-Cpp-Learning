//Given the head of a linked list, remove the nth node from the end of the list and return its head.

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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head,*temp;
        while(curr!=NULL){
            temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode();
        dummy->next=reverse(head);
        head=dummy;
        ListNode* prev=NULL;
        ListNode* curr=head;
        for(int i=0;i<n;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return reverse(dummy->next);
    }
};