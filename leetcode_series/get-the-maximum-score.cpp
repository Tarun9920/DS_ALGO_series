#include <bits/stdc++.h>

class Solution {
public:
    unordered_map<int,int> table1,table2;
    long long p=100000000000007;
    
    long long dp(int i, int j, vector<int> &nums1, vector<int> &nums2, int n, int m, vector<vector<long long>> &table)
    {
        if(i==0 && j>=n)
            return 0;
        
        if(i==1 && j>=m)
            return 0;
        
        if(table[i][j]!=-1)
            return table[i][j];
        
        long long a=0,b=0,c;
        
        if(i==0)
        {
            a=dp(i,j+1,nums1,nums2,n,m,table);
            
            if(table2.find(nums1[j])!=table2.end())
                b=dp(1,table2[nums1[j]]+1,nums1,nums2,n,m,table);
            
            c=(nums1[j])%p;
            c=(c + (max(a,b))%p)%p;
            table[i][j]=c;
        }
        else
        {
            a=dp(i,j+1,nums1,nums2,n,m,table);
            
            if(table1.find(nums2[j])!=table1.end())
                b=dp(0,table1[nums2[j]]+1,nums1,nums2,n,m,table);
            
            c=(nums2[j])%p;
            c=(c + (max(a,b))%p)%p;
            table[i][j]=c;       
        }
        
        return table[i][j];
    }
    
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(),m=nums2.size();
        
        vector<vector<long long>> table(2, vector<long long>(max(n,m),-1));
        
        for(int i=0; i<n; i++)
            table1.insert(make_pair(nums1[i],i));
        
        for(int i=0; i<m; i++)
            table2.insert(make_pair(nums2[i],i));
        
        dp(0,0,nums1,nums2,n,m,table);
        dp(1,0,nums1,nums2,n,m,table);
        
        return max(table[0][0],table[1][0])%(1000000007);
    }
};