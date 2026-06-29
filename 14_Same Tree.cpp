#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Dono null hai to same
        if (p == nullptr && q == nullptr) return true;
        
        // Ek null hai ek nahi to different
        if (p == nullptr || q == nullptr) return false;
        
        // Value same hai aur left + right subtrees same hai
        return (p->val == q->val) 
            && isSameTree(p->left, q->left) 
            && isSameTree(p->right, q->right);
    }
};

// Helper function: Tree create karne ke liye
TreeNode* createTree() {
    // Example: [1,2,3]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    return root;
}

int main() {
    Solution sol;
    
    // Test Case 1: [1,2,3] vs [1,2,3] -> true
    TreeNode* p1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* q1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    cout << "Test 1: " << (sol.isSameTree(p1, q1)? "true" : "false") << endl;
    
    // Test Case 2: [1,2] vs [1,null,2] -> false
    TreeNode* p2 = new TreeNode(1, new TreeNode(2), nullptr);
    TreeNode* q2 = new TreeNode(1, nullptr, new TreeNode(2));
    cout << "Test 2: " << (sol.isSameTree(p2, q2)? "true" : "false") << endl;
    
    // Test Case 3: [1,2,1] vs [1,1,2] -> false
    TreeNode* p3 = new TreeNode(1, new TreeNode(2), new TreeNode(1));
    TreeNode* q3 = new TreeNode(1, new TreeNode(1), new TreeNode(2));
    cout << "Test 3: " << (sol.isSameTree(p3, q3)? "true" : "false") << endl;

    return 0;
}
