// floor and ceil from bst
/*This function is used to find floor of a key*/
int floor(Node* root, int key)
{
    if (!root)
        return INT_MAX;
 
    /* If root->data is equal to key */
    if (root->data == key)
        return root->data;
 
    /* If root->data is greater than the key */
    if (root->data > key)
        return floor(root->left, key);
 
    /* Else, the floor may lie in right subtree
      or may be equal to the root*/
    int floorValue = floor(root->right, key);
    return (floorValue <= key) ? floorValue : root->data;
}


int Ceil(node* root, int input)
{
    // Base case
    if (root == NULL)
        return -1;
 
    // We found equal key
    if (root->key == input)
        return root->key;
 
    // If root's key is smaller, ceil must be in right subtree
    if (root->key < input)
        return Ceil(root->right, input);
 
    // Else, either left subtree or root has the ceil value
    int ceil = Ceil(root->left, input);
    return (ceil >= input) ? ceil : root->key;
}
