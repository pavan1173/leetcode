/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root == NULL) return 0;
    if(root->right == NULL){
        return minDepth(root->left)+1;

    }
    if(root-> left == NULL){
        return minDepth(root->right)+1;
    }
    int leftd = minDepth(root->left);
    int rightd = minDepth(root->right);
    return ( leftd < rightd ? leftd : rightd)+1;
    
}