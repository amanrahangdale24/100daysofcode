/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA ; 
        ListNode* p2 = headB ;
        int l1 = 0 , l2 = 0 ;
        while(p1){
            l1++ ;
            p1 = p1->next ; 
        }
        while(p2){
            l2++;
            p2 = p2->next ; 
        }
        int a =0 ;
        if(l1>l2){
            a = l1-l2 ;
            while(a!=0){
                headA = headA->next ;
                a--;
            }
        }
        else{
            a = l2-l1;
            while(a!=0){
                headB =  headB->next ;
                a--;
            }
        }
        ListNode* t1 = headA ; 
        ListNode* t2 = headB ;
        ListNode* fnl = NULL ; 
        while(t1 && t2){
            if(t1 == t2){
                fnl = t1;
                break;
            }
            else{
                t1 = t1->next ; 
                t2 = t2->next ;
            }
        }
        return fnl;
    }
};
