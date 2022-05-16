//kth largest element in a bst
/*
   time : O(h + k)
   space : O(h)
   
*/

f(root , k , c){
	 if(root == NULL or c>=k){
	 	 return;
	 }
	 
	 f(root -> right ,k ,c);
	 c = c + 1;
	 
	 if(c == k){
	 	 print(root -> data);
	 	 return;
	 }
	 
	 f(root -> left , k , c);
	 
	 
}

kthlargest(root,k){
	 int counter = 0;
	 f(root,k,c);
}


int main(){
	 root;
	 k;
	 
	 kthlargest(root , k );
}
