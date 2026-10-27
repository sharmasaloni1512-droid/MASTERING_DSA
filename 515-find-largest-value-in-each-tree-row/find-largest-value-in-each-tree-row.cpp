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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        queue<TreeNode*> q;
        q.push(root);
        vector<int> largerValue;

        while(!q.empty()){
            int size = q.size();
            int levelMax = INT_MIN;

            for(int i = 0; i < size; i++){
                TreeNode* frontNode = q.front();
                q.pop();

                levelMax = max(levelMax, frontNode->val);

                if(frontNode -> left){
                    q.push(frontNode->left);
                }

                if(frontNode -> right){
                    q.push(frontNode -> right);
                }
            }
            largerValue.push_back(levelMax);
        }

        return largerValue;
    }
};