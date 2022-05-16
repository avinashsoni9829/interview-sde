class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return  NULL;
        
        if(root == p or root == q){
             return root;
        }
        root -> left = lowestCommonAncestor(root -> left , p ,q);
        root -> right = lowestCommonAncestor(root -> right , p , q);
         
        if(root -> left  && root -> right) return root;
        if(root -> left) return root -> left;
        return root -> right;
        
    }
};
