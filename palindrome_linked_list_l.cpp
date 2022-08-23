class Solution {
public:
    ListNode *reversalList(ListNode* head){
        ListNode* pre=NULL;
        ListNode* temp=NULL;
        
        while(head!=NULL){
          temp=head->next;
          head->next=pre;
          pre=head;
          head=temp;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)return true;
        ListNode*slow= head;
        ListNode*fast= head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reversalList(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};