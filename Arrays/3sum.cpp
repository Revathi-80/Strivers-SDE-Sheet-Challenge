#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	sort(nums.begin(),nums.end());
	vector<vector<int>>ans;
	for(int i=0;i<n;i++){
		if(i>0 && nums[i]==nums[i-1]) continue;
		int j=i+1;
		int k=n-1;
		while(j<k){
			long long sum=nums[i]+nums[j];
			sum+=nums[k];
			if(sum==K){
				vector<int>temp={nums[i],nums[j],nums[k]};
				ans.push_back(temp);
				j++,k--;
				while(j<k && nums[j]==nums[j-1]) j++;
				while(j<k && nums[k]==nums[k+1]) k--;
			}
			else if (sum<K) j++;
			else k--;
		}
	}
	sort(ans.begin(),ans.end());
	return ans;
}
