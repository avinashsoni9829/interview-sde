1. Inorder Traversal : 

vector<int>inorderTraversal(node * root){
	 vector<int>ans;
	 stack<node*>st;
	 
	 if(root == null) return ans;
	 
	 node * curr = root;
	 
	 while(curr!=null or st.empty() == false){
	 	  
	 	   while(curr!=null)
	 	   {
	 	   	 st.push(curr);
	 	   	 curr = curr -> left;
	 	   }
	 	   
	 	   curr = st.top();
	 	   st.pop();
	 	   
	 	   ans.push_back(curr -> value);
	 	   
	 	   curr = curr -> right;
	 	   
	 }
	 
	 return ans;
	 
}


============================================================================

2.PreOrder Traversal : 

vector<int> preorderTrav(node * root){
	 vector<int>ans;
	 stack<node*>st;
	 
	 if(!root){
	 	 return ans;
	 }
	 
	 st.push(root);
	 
	 while(!st.empty()){
	 	 node * t  = st.top();
	 	 st.pop();
	 	 
	 	 ans.push_back(t->value);
	 	 
	 	 if(t -> right) s.push(t -> right);
	 	 
	 	 if(t -> left) s.push(t -> left);
	 	 
	 }
	 return ans;
}


============================================================================

3. PostOrder Traversal 
  vector<int> postOrder(node * root){
  	 vector<int>res;
  	 if(!root) return res;
  	 
  	 stack<node*>curr_stack;
  	 stack<node*>ans;
  	 
  	 curr_stack.push(root);
  	 
  	 while(!curr_stack.empty()){
  	 	 node * top = curr_stack.top();
  	 	 ans.push(top);
  	 	 curr_stack.push(top);
  	 	 
  	 	 if(top -> left) curr_stack.push(top -> left);
  	 	 if(top -> right) curr_stack.push(top -> right);
  	 	 
  	 }
  	 
  	 while(!ans.empty()){
  	 	 node * temp = ans.top();
  	 	 ans.pop();
  	 	 res.push_back(temp -> val);
  	 	 
  	 }
  	 
  	 return res;


}

============================================================================ 	

4. Left View of Binary Tree - DFS 


void leftView(node * root , vector<int>&ans , int curr , int * mx){
	    if(root == null) return ;
	    
	    if(curr > * mx){
	    	 print(root);\
	    	 *mx  = curr;
	    }
	    
	    leftView(root -> left , ans , curr + 1 , mx);
	    leftView(root  -> right , ans , curr + 1 , mx);
	    
}

============================================================================ 	

5. Left View of Binary Tree - BFS


vector<int> leftView(node * root){
	 vector<int>ans;
	 if(root == null) return ans;
	 queue<node*>q;
	 q.push(root);
	 
	 while(!q.empty()){
	 	 int sz = q.size();
	 	 
	 	 for(int i =  0 ; i < sz ; ++i){
	 	 	 node * curr = q.front();
	 	 	 q.pop();
	 	 	 
	 	 	 if(i == 0) ans.push_back(curr -> data);
	 	 	 
	 	 	 if(curr -> left ) q.push(curr -> left);
	 	 	 if(curr -> right) q.push(curr -> right);
	 	 	 
	 	 	 
	 	 }
	 }
	 
	 return ans;
	 
}


============================================================================ 	

6. Bottom View of Binary Tree - BFS


vector<int> bottomView(node * root){
	 vector<int>ans;
	 map<int,int>mp;
	 
	 queue<pair<node * , int >> q;
	 
	 q.push({root  , 0});
	 
	 while(!q.empty()){
	 	 node * curr = q.front().first;
	 	 int height = q.front().second;
	 	 
	 	 q.pop();
	 	 
	 	 mp[h] = curr -> data;
	 	 
	 	 if(curr -> left) q.push({curr -> left , height  - 1});
	 	 if(curr -> right) q.push({curr -> right , height + 1});
	 	 
	 	 
	 }
	 
	 
	 for(auto z : mp){
	 	 ans.push_back(z.second);
	 }
	 
	 return ans;
	 
} 

============================================================================ 	

6. top View of Binary Tree - BFS


vector<int> topView(node * root){
	 vector<int>ans;
	 map<int,int>mp;
	 
	 queue<pair<node * , int >> q;
	 
	 q.push({root  , 0});
	 
	 while(!q.empty()){
	 	 node * curr = q.front().first;
	 	 int height = q.front().second;
	 	 
	 	 q.pop();
	 	 
	 	 if(!mp[h])
	 	 mp[h] = curr -> data;
	 	 
	 	 if(curr -> left) q.push({curr -> left , height  - 1});
	 	 if(curr -> right) q.push({curr -> right , height + 1});
	 	 
	 	 
	 }
	 
	 
	 for(auto z : mp){
	 	 ans.push_back(z.second);
	 }
	 
	 return ans;
	 
} 



============================================================================ 	

7. Diameter of a Binary Tree 

int diameter(node * root){
	 if(root == null) return 0;
	 
	 int op1 = height(root -> left) + height(root -> right);
	 int op2 = diameter(root -> left);
	 int op3 = diameter(root -> right);
	 
	 return max({op1, op2 , op3});
	 
	 
}


============================================================================ 	

8. LCA  of a Binary Tree 


node * lca (node * root , node * a , node * b){
	  
	    if(root == null) return null;
	    
	    if(root == a or root == b) return root;
	    
	    root -> left = lca(root ->left , a , b);
	    
	    root -> right = lca(root -> right ,a , b);
	    
	    if(root -> left && root -> right) return root;
	    
	    if(root -> left) return root -> left;
	    
	    return root -> right;
	    
	    
	  
}


============================================================================ 	

9. Construct Binary Tree from Inorder and PreOrder 

  unordered_map<int,int>mp;
  int idx = 0 ;

  node * helper(vector<int>pre , vector<int>in,int low , int high){
  	  if(low > high) return null;
  	  
  	  node * nd = new node(pre[idx]);
  	  idx = idx + 1;
  	  
  	  if(low == high) return nd;
  	  
  	  int pos = mp[nd -> value];
  	  
  	  nd -> left = helper(pre , in , low , pos - 1);
  	  
  	  nd -> right = helper(pre , in , pos + 1, high);
  	  
  	  return nd;
  	  
  	  
  }



  node * buildTree(vector<int>pre ,vector<int>inorder){
  	 
  	   idx = 0 ;
  	   mp.clear();
  	   
  	   for(int i = 0 ; i < (int) inorder.size() ; ++i)
  	   {
  	   	  mp[inorder[i]] = i;
  	   }
  	   
  	   node * ans = helper(pre,inorder , 0 , inorder.size() - 1);
  	   return ans;
  	   
  }
  
  
============================================================================ 	

10. Construct Binary Tree from Inorder and PostOrder 


node * helper(vector<int>post,vector<int>in,unorderd_map<int,int>&mp,int&idx,int low ,int high){
	  if(low > high) return null;
	  node * nd = new node(post[idx]);
	  idx = idx - 1;
	  
	  if(low == high) return nd;
	  
	  int pos = mp[curr -> val];
	  
	  curr -> right = helper(post,in,mp,idx , pos + 1, high);
	
	  curr -> left  = helper(post ,in , mp, idx , low , pos - 1);
	  
	  
	  return curr;
	  
}




node * buildTree(vector<int>post , vector<int>inorder){
      
       unordered_map<int,int>mp;
       int idx = n - 1;
       
       for(int i = 0 ; i < inorder.size() ; ++i)
       {
       	 mp[inorder[i]] = i ;
       }
       
       	
       node * ans = helper(in,post,mp,idx,0,n-1); 
}

============================================================================ 	

11. Find LCA in a BST : 
 

node * lcaBST(node * root , node * p , node * q){
	 if((root -> val < p -> val) && (root -> val > q -> val)){
	 	return lcaBST(root -> left , p , q);
	 	
	 }
	 if((root -> val < p -> val) && (root -> val< q -> val)){
	 	return lcaBST(root -> right , p , q);
	 }
	 
	 return root;
	 
	 
}

