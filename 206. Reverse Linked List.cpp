class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode *temp=head->next, *prev=NULL;
        while(temp!=NULL){
            temp=head->next;
            head->next=prev;
            prev=head;
            if(temp!=NULL)
            head=temp;
        }
        return head;
    }
};
