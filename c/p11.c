#include <stdio.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
int isSameTree(struct TreeNode* p, struct TreeNode* q){
    // If both nodes are NULL, they are considered the same
    if(p == NULL && q == NULL){
        return 1;
    }
    // If one of the nodes is NULL and the other is not, they are not the same
    if(p == NULL || q == NULL){
        return 0;
    }
    // Check if the current node values are equal
    if(p->val == q->val){
        // Recursively check the left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    // If the values are not equal, the trees are not the same
    return 0;
}
