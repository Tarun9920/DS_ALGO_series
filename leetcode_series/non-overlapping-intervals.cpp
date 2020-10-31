#include <bits/stdc++.h>

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        
        int l,n,cur,minn,ans=0;
        l=0;
        n=a.size();
        
        while(l<n)
        {
            minn=a[l][1];
            cur=l;
            l++;
            while(l<n && a[l][0]<minn)
            {
                minn=min(minn,a[l][1]);
                l++;
            }
            
            ans+=l-cur-1;
        }
        
        return ans;
    }
};