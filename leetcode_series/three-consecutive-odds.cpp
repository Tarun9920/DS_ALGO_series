#include <bits/stdc++.h>

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        for(int i=0; i<arr.size(); i++)
            arr[i]=(arr[i]%2)?1:0;
        
        int ct=0;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i])
                ct++;
            else
                ct=0;
            
            if(ct==3)
                return true;
        }
        
        return false;
    }
};