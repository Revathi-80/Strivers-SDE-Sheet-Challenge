#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>ans;
    if(root==NULL) return ans;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});
    map<int,int>mpp;
    while(!q.empty()){
        int sz=q.size();
        for(int i=0;i<sz;i++){
            BinaryTreeNode<int> *node=q.front().first;
            int index=q.front().second;
            mpp[index]=node->data;
            q.pop();
            if(node->left){
                q.push({node->left,index-1});
            }
            if (node->right){
                q.push({node->right,index+1});
            }
        }
    }
    for (auto it:mpp) {
        ans.push_back(it.second);
    }
    return ans;
}
