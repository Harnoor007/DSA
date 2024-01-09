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
    void findLeafNodes(TreeNode* root, vector<int>& leafNodes) {
    if (root == nullptr) {
        return;
    }

    if (root->left == nullptr && root->right == nullptr) {
        leafNodes.push_back(root->val);
    }

    findLeafNodes(root->left, leafNodes);
    findLeafNodes(root->right, leafNodes);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nodes1;
        vector<int> nodes2;
        findLeafNodes(root1, nodes1);
        findLeafNodes(root2, nodes2);
        int n = 0;
        if(nodes1.size() >= nodes2.size())
            n = nodes1.size();
        else
            n = nodes2.size();
        for(int i = 0; i<n; i++){
            if(nodes1[i] != nodes2[i])
                return false;
        }
        return true;
    }
};