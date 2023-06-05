#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi=0,cur=0;
    for(int i=0;i<n;i++){
        cur+=arr[i];
        maxi=max(maxi,cur);
        if(cur<0){
            cur=0;
        }
    }
    return maxi;
}
