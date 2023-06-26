#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int>&inds){
    if (root==NULL) return;
    inorder(root->left,inds);
    inds.push_back(root->data);
    inorder(root->right,inds);
}
void preorder(BinaryTreeNode<int> *root,vector<int>&preds){
    if (root==NULL) return;
    preds.push_back(root->data);
    preorder(root->left,preds);
    preorder(root->right,preds);
}
void postorder(BinaryTreeNode<int> *root,vector<int>&postds){
    if (root==NULL) return;
    postorder(root->left,postds);
    postorder(root->right,postds);
    postds.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<int>inds,preds,postds;
    inorder(root,inds);
    preorder(root,preds);
    postorder(root,postds);
    vector<vector<int>>ans ={inds,preds,postds};
    return ans;
}
