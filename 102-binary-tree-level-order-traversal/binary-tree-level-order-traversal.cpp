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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        vector<vector<int>> levelOrderTrav;

        while(!q.empty()){
            int size = q.size();
            levelOrderTrav.push_back({});

            for(int i = 0; i < size; i++){
                TreeNode* frontNode = q.front();
                q.pop();

                levelOrderTrav[level].push_back(frontNode->val);

                if(frontNode -> left){
                    q.push(frontNode -> left);
                }

                if(frontNode -> right){
                    q.push(frontNode -> right);
                }
            }
            level++;
        }
        return levelOrderTrav;
    }
};