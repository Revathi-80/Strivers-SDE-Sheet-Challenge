#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inorder(TreeNode *root,vector<int>&ds){
    if(root==NULL) return;
    inorder(root->left,ds);
    ds.push_back(root->data);
    inorder(root->right,ds);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ds;
    inorder(root,ds);
    return ds;
}
