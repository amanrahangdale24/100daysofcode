class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL; 
        }
        ListNode* temp = head;
        while(temp!=NULL && temp->next != NULL){
            ListNode* npr = temp->next ;
            if(temp->val == npr->val){
                temp->next = npr->next ; 
                
            }
            else{
                temp = temp->next ; 
            }
        }

        return head;
    }
};
