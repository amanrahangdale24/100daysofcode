class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head ;
        if(temp==NULL){
            return NULL ; 
        }
       

        while(temp->next != NULL){
             if(temp->val == val && temp->next != NULL){
            head = head->next  ; 
            }
            if(temp->next->val == val){
            temp->next = temp->next->next ;  
            }
            else{
                temp=temp->next ; 
            } 
        }
        if(temp->val == val){
            return NULL ;
        }
        else{
            return head ; 
        }

    }
};
