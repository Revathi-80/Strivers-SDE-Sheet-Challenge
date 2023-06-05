#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int peak=-1;
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            peak=i;
            break;
        }
    }
    if(peak==-1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    for(int i=n-1;i>peak;i--){
        if(permutation[i]>permutation[peak]){
            swap(permutation[i],permutation[peak]);
            break;
        }
    }
    reverse(permutation.begin()+peak+1,permutation.end());
    return permutation;
}
