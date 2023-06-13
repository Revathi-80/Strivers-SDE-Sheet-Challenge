#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left=0,right=m-1,top=0,bottom=n-1;
    while(left<right && top<bottom){
    // from left to right
    int prev=mat[top+1][left];
    for(int i=left;i<=right;i++){
        int temp=mat[top][i];
        mat[top][i]=prev;
        prev=temp;
    }
    top++;
    //from top to bottom
    for(int i=top;i<=bottom;i++){
        int temp=mat[i][right];
        mat[i][right]=prev;
        prev=temp;
    }
    right--;
    
    // from right to left
    for(int i=right;i>=left;i--){
        int temp=mat[bottom][i];
        mat[bottom][i]=prev;
        prev=temp;
    }
    bottom--;
    //from bottom to top
    for (int i = bottom; i >= top; i--) {
      int temp = mat[i][left];
      mat[i][left] = prev;
      prev = temp;
    }
    left++;
    }
}
