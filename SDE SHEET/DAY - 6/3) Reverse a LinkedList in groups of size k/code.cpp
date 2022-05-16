class Solution {
public:
    
	
	ListNode* reverseKGroup(ListNode* head, int k)
	{
	    if(head == NULL or k == 1) return head;
        ListNode * dummy = new ListNode(0);
        
        dummy -> next = head;
        ListNode * curr = dummy;
        ListNode * nex = dummy;
        ListNode * pre  = dummy;
        int len = 0 ;
        
		while(curr -> next!=NULL)
		{
            curr = curr -> next;
            len = len + 1;
        }
        
        while(len>=k)
		{
        
		curr = pre -> next;
        nex = curr -> next;
        
		for(int i = 1 ; i < k ; ++i)
		{
        curr -> next = nex-> next;
        nex -> next = pre -> next;
        pre-> next = nex;
        nex = curr -> next ;
        }
        
		pre = curr;
        len = len - k;
        
		}
        
		return dummy -> next;
           
    }
};
