
#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int>mpp;
  int len=0,sum=0;
  int n=arr.size();
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0){
      len=max(len,i+1);
    }
    if(mpp.find(sum)!=mpp.end()){
      len=max(len,(i-mpp[sum]));
    }
    if(mpp.find(sum)==mpp.end()){
      mpp[sum]=i;
    }
  }
  return len;

}
