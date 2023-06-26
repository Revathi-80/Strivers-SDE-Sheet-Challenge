#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void recur(TreeNode<int>*root,vector<int>&res,int level){
    if(root==NULL) return;
    if(res.size()==level)
    res.push_back(root->data);
    recur(root->left,res,level+1);
    recur(root->right,res,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>res;
    ///res.push_back(root->data);
    recur(root,res,0);
    return res;
}
