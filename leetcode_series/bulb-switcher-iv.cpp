#include <bits/stdc++.h>

class Solution {
public:
    int minFlips(string target) {
        int ct,n,i,ans=0;
        
        ct=0;
        n=target.length();
        i=n-1;
        
        while(i>=0)
        {
            while(i>=0 && target[i]=='0')
            {
                ct++;
                i--;
            }
            
            if(i<0)
                break;
            
            while(i>=0 && target[i]=='1')
                i--;
            
            if(ct)
                ans+=2;
            else
                ans++;
        }
        
        return ans;
        
    }
};