#include <bits/stdc++.h>

class Solution {
public:
    int largestComponentSize(vector<int>& A) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int> parent(100001,-1),prime(100001,1),ct(100001,0),pt(100001);
        int d,ans=1;
        
        for(int i=1; i<=100000; i++)
            parent[i]=i;
        
        for(int i=0; i<A.size(); i++)
            ct[A[i]]++;
        
        for(long long i=2; i<=100000; i++)
        {
            if(!prime[i])
                continue;
            
            for(long long j=2; i*j<=100000; j++)
            {
                
                prime[i*j]=0;
                
                if(!ct[i*j])
                    continue;
                
                d=i*j;
                
                while(d!=parent[d])
                    d=parent[d];
                
                parent[d]=i;
            }
        }
        
        
        for(int i=0; i<A.size(); i++)
        {
            d=A[i];
            
            while(parent[d]!=d)
                d=parent[d];
            
            pt[d]++;
            ans=max(ans,pt[d]);
        }
        
        return ans;
        
    }
};