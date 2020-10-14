class Solution {
public:
    
    int minTimeToVisitAllPoints(vector<vector<int>>& A) {
    
        int a,b,i,j,k,l,d=0;
        for(i=1;i<A.size();i++)
        {
            a= abs(A[i][0]-A[i-1][0]);
            b= abs(A[i][1]-A[i-1][1]);
            d+=max(a,b);
        }
        return d;
    }
};
