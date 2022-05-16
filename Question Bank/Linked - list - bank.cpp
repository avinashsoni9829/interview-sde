1. Reverse a Linked List 

void reverse(node * head){
	 node * curr = null;
	 while(head!=null){
	 	 node * temp = head -> next;
	 	 head -> next = curr;
	 	 curr = head;
	 	 head = temp;
	 }
	 return curr;
	 
}

=========================================================================

2. Middle of a Linked List : 


node* middleofLL(node * head)
{ 
    node * slow = head;
    node * fast = head;
    
    while(slow!=fast){
    	 slow = slow -> next;
    	 fast = fast -> next -> next;
    }
    
    return slow;
    
}

==========================================================================

3.Merge Two Sorted Linked List 

  node * merge(node * l1 , node * l2){
  	  if(l1 == null) return l2;
  	  if(l2 == null) return l1;
  	  
  	  node * ans = null;
  	  
  	  if(l1 -> val < l2 -> val){
  	      head = l1;
  	      l1 = l1 -> next;	 
  	  }
  	  else
  	  {
  	  	 head = l2;
  	  	 l2 = l2 -> next;
  	  }
  	  
  	  
  	  node * curr = head;
  	  
  	  
  	  while(l1 && l2){
  	  	 if(l1 -> val < l2 -> val){
  	  	 	 curr -> next = l1;
  	  	 	 l1 = l1 -> next;
  	  	 	 
  	  	 }
  	  	 else
  	  	 {
  	  	 	 curr -> next = l2 ;
  	  	 	 l2  = l2 -> next;
  	  	 }
  	  	 
  	  	 l2 = l2 -> next;
  	  }
  	  
  	  
  	  if(l1) curr -> next = l1;
  	  else
  	  if(l2) curr -> next = l2;
  	  
  	  
  	  return head;
  	  
  }

time  : O(n + m);
space : O(n + m);


==========================================================================


4. Delete Nth Node from the End:

   node * removeNth(node * head, int n){
   	 node * ans = new node(0);
   	 ans -> next = head;
   	 
   	 node * fast = ans ;
   	 node * slow = ans;
   	 
   	 while(n--) fast = fast -> next;
   	 
   	 while(fast -> next != null){
   	 	 slow = slow -> next;
   	 	 fast = fast -> next;
   	 }
   	 
   	 slow -> next = slow -> next -> next;
   	 return ans -> next;
   } 
   
 time : O(n)
 space : O(1)

==========================================================================

5. Add Two Numbers as a Linked List : 

node * addnumber(node * l1 , node * l2){
	    node * ans = new node(0);
	    
	    node * curr = ans;
	    int carry = 0;
	    while(l1!= null or l2!=null or carry){
	    	  int sum = 0 ;
	    	  
	    	  if(l1!=null){
	    	  	 sum = sum + l1 -> val ;
	    	  	 l1 = l1 -> next;
	    	  }
	    	  
	    	  if(l2!=null){
	    	  	 sum = sum + l2 -> val;
	    	  	 l2 = l2 -> next;
	    	  }
	    	  
	    	  sum = sum + carry;
	    	  carry = sum / 10;
           
              node* nd = new node(sum%10);
              
              curr -> next = nd;
              curr = nd;
              
    }
    return ans -> next;
    
}

time  :  O(max : (l1.length , l2.length))
space  : O(1) 
 
  
==========================================================================  

6. Find Intersection of Y linked List

   node * getIntersection(node * headA , node * headB)
   {
          
           if(headA == null or headB == null) return null;
           
           node * A = headA;
           node * B = headB;
                        
           while(A!=B)
           {
           	  	A = (A == NULL) ? headB : A -> next;
           	  	B = (B == NULL) ? headA : B -> next;
           }
           
           return A;
   }

==========================================================================

7. bool hasCycle(node * head)
   {
       if(head == null or head -> next == null) return  false;
       
       node * slow = head;
       node * fast = head -> next;
       
       while(slow!=fast)
       {
       	 
       	 if(fast == null or fast -> next == null)
       	 {
       	 	 return false;
       	 }
       	 
       	 fast = fast -> next -> next;
       	 slow = slow -> next;
       	 
       }
       
       return true;
       	 
  
   }  

==========================================================================

8. Reverse a Linkedlist in group of size k 

   
node * reverseKgroup(node * head , int k){
	 
	 if(head == null or k == 1)
	 return head;
	 
	 node * dummy = new node(0);
	 
	 dummy -> next = head;
	 
	 node * curr = dummy;
	 node * prev = dummy;
	 node * nex  = dummy;
	 
	 int len = 0 ;
	 
	 
	 while(curr -> next!=null)
	 {
	 	len = len + 1;
	 	curr = curr -> next;
	 } 
	 
	 while(len - k >= 0)
	 {
	 	  curr = pre -> next;
	 	  nex  = curr -> next;
	 	  for(int  i = 1 ; i< k ; ++i)
	 	  {
	 	  	 curr -> next = nex -> next;
	 	  	 nex -> next = pre -> next;
	 	  	 pre -> next = nex;
	 	  	 nex = curr -> next;
	 	  }
		  pre = curr;
	 	  len = len - k ;
	 }
	 return dummy -> next;
	 
}


==========================================================================

9. Find the Point where Cycle Starts : 


node * detectCycle(node * head)
{
	   if(head == null or head -> next == null) return null;
	   
	   node * slow = head;
	   node * fast = head;
	   while(fast!=null or fast->next!=null){
	   	 slow = slow -> next;
	   	 fast = fast -> next -> next;
	   	 if(slow == fast) break;
	   }
	   
	   if(fast == null or fast -> next == null) return null;
	   
	   slow = head;
	   
	   while(fast!=slow){
	   	 slow = slow -> next;
	   	 fast = fast -> next;
	   }
	   
	   return slow;
}

==========================================================================

10. Flatten a Linked List : 


node * mergeTwo(node * a, node * b)
{
	 node * temp = new node(0);
	 node * res = temp;
	 
	 while(a!=null && b!=null)
	 {
	 	 if(a->data < b-> data)
	 	 {
	 	 	 temp -> bottom = a;
	 	 	 temp = temp -> bottom;
	 	 	 a = a -> bottom;
	 	 }
	 	 else
	 	 {
	 	 	 temp -> bottom = a;
	 	 	 temp = temp -> bottom;
	 	 	 b = b -> bottom;
	 	 	 
	 	 }
	 }
	 
	 if(a) temp -> bottom = a;
	 else temp -> bottom = b;
	 
	 return res -> bottom;
	 
}


node * flatten(node * root){
	
	if(root == null  or root ->next == null) return root;
	root -> next = flatten(root -> next);
	root = merge(root, root -> next);
	return root;
}





