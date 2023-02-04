/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        dfs(root);
        return result;
    }

    void dfs(Node* node) {
        if (!node) {
            return;
        }
        result.push_back(node->val);
        for (Node* next : node->children) {
            dfs(next);
        }
    }

    vector<int> result;
};