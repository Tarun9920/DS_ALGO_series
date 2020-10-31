#include <bits/stdc++.h>

class Solution {
public:
    
    bool check(string &s, int len, int n)
    {
        
        for(int j=0; j<n; j++)
        {
            if(s[j%len]!=s[j])
                return false;
        }

        return true;
        
    }
    
    bool repeatedSubstringPattern(string s) {
        
        int n;
        n=s.length();
        
        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i!=n && check(s,i,n))
                    return true;
                
                if(i!=1 && check(s,n/i,n))
                    return true;

            }
        }
        
        return false;
        
    }
    
};