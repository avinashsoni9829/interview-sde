class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
	{   
	    vector<int>ans;
        stack<TreeNode*>st;
        if(root == NULL) return ans;
        
        
        TreeNode * curr = root;
        
        while(curr!=NULL or st.empty() == false){
             
            while(curr!=NULL){
                 st.push(curr);
                curr = curr -> left;
            }
            
            curr = st.top();
            st.pop();
            
            ans.push_back(curr -> val);
            curr = curr -> right;
        }
        
        return ans;
    }
};
