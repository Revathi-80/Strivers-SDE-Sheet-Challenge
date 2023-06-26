#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    vector<int>ans;
    if(root==NULL) return ans;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    map<int,int>mpp;
    while(!q.empty()){
        int sz=q.size();
        for(int i=0;i<sz;i++){
            TreeNode<int> *node=q.front().first;
            int index=q.front().second;
            q.pop();
            if(mpp.find(index)==mpp.end())
                mpp[index]=node->val;
            if(node->left){
                q.push({node->left,index-1});
            }
            if(node->right) {
                q.push({node->right,index+1});
            }
        }
    }
    for (auto it:mpp){
        ans.push_back(it.second);
    }
    return ans;
}
