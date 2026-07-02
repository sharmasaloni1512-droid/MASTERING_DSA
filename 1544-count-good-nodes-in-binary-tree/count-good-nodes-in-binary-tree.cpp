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
private:
    int goodNode = 0;
    void solve(TreeNode* root, int maxValue){
        if(root == NULL){
            return;
        }

        if(root->val >= maxValue){
            goodNode++;
        }

        int newMax = max(root->val, maxValue);

        solve(root->left, newMax);
        solve(root->right, newMax);
        
    }
    
public:
    int goodNodes(TreeNode* root) {
        solve(root, root->val);
        return goodNode;
    }
};