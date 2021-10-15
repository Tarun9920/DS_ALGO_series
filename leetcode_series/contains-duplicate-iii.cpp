#include <bits/stdc++.h>

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
        multiset<long long> s;
        multiset<long long>::iterator itr1,itr2;
        int n=nums.size();
        
        if(k==0)
            return false;
        
        for(int i=0; i<min(k,n); i++)
        {
            s.insert(nums[i]);
            itr1=s.find(nums[i]);
            
            itr2=s.find(nums[i]);
            if(itr1!=s.begin() && (*(itr1) - *(--itr2)<=t))
                return true;
            
            itr2=s.find(nums[i]);
            if(itr1!=(--s.end()) && (*(++itr2) - *(itr1)<=t))
                return true;            
        }
        
        
        for(int i=k; i<n; i++)
        {
            if(i-k-1>=0)
                s.erase(s.find(nums[i-k-1]));
            
            s.insert(nums[i]);
            itr1=s.find(nums[i]);  
            
            itr2=s.find(nums[i]);
            if(itr1!=s.begin() && (*(itr1) - *(--itr2)<=t))
                return true;
            
            itr2=s.find(nums[i]);
            if(itr1!=(--s.end()) && (*(++itr2) - *(itr1)<=t))
                return true;         
        }
        
        return false;
    }
};