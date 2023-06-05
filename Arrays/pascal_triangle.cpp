#include <bits/stdc++.h>
vector<long long int> func(int row) {
  long long ans=1;
  vector<long long int>res;
  res.push_back(1);
  for(int col=1;col<row;col++) {
    if(row!=col)
    ans=ans*(row-col);
    // if(col!=0)
    ans=ans/col;
    res.push_back(ans);
  }
  return res;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> res;
  for(int i=1;i<=n;i++) {
    
      res.push_back(func(i));
    
  }
  return res;
}
