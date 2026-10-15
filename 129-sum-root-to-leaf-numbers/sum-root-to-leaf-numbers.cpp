/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode * root, int k, int & total){
        if(root == NULL){
            return;
        }

        k = k * 10 + root ->val;
        if(!root->left && !root->right){
            total += k;
            return;
        }

        solve(root->left, k, total);
        solve(root->right, k, total);
    }
    int sumNumbers(TreeNode* root) {
        int total = 0;
        solve(root, 0, total);
        return total;
    }
};