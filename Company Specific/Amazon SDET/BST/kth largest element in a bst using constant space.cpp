// kth largest element in a bst using constant space 
/*
   time : O(n)
   space : O(1)
   

*/
Node * curr = root;
Node * klargest = NULL;

int count = 0;

while(curr!=NULL){
	  
	  // if curr -> right is NULL
	  
	  if(curr -> right == NULL){
	  	  if(++count == k){
	  	  	 klargest = curr;
			}
			curr = curr -> left;
	  }
	  else
	  {
	  	 // find inorder successor 
	  	 
	  	 Node * succ = curr -> right ;
	  	 
	  	 while(succ->left!=NULL and succ -> left!=curr){
	  	 	 succ = succ -> left;
		   }
		   
		   if(succ -> left == NULL){
		   	   succ -> left = curr ;
		   	   curr = curr -> right;
		   }
		   else
		   {
		   	  // already linked
		   	  
		   	  succ -> left = NULL;
		   	  
		   	  if(++count == k){
		   	  	 klargest = NULL;
				 }
				 curr = curr -> left;
				 
		   }
	  }
	  
	  
	  
}

return kLargest;


