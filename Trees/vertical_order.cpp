#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    vector<int>ans;
    if(root==NULL) return ans;
    map<int,vector<int>>mpp;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    mpp[0].push_back(root->data);
    while(!q.empty()){
       
            TreeNode<int> *node=q.front().first;
            int ver=q.front().second;
            q.pop();
            if(node->left){
                q.push({node->left,ver-1});
                mpp[ver-1].push_back(node->left->data);
            }
            if(node->right){
                q.push({node->right,ver+1});
                mpp[ver+1].push_back(node->right->data);
            }
        
    }
  
    for (auto it:mpp){
        for (auto p:it.second){
            ans.push_back(p);
        }
    }
    
    return ans;
}
