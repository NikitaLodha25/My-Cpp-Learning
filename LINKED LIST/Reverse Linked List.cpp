// Given the head of a singly linked list, reverse the list, and return the reversed list.

class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev=NULL,*curr=head,*temp;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    
};