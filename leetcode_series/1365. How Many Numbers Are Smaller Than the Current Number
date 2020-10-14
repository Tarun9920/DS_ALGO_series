class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& B) {
        int A[101],i,j,k,n=B.size();
        for(i=0;i<101;i++)
            A[i]=0;
        
        for(i=0;i<n;i++)
        {
            A[B[i]]++;
        }
        for(i=1;i<=100;i++)
        {
            A[i]+=A[i-1];
        }
        vector<int>C;
        for(i=0;i<n;i++)
        {
            if(B[i]==0) C.push_back(0);
            else
            C.push_back(A[B[i]-1]);
        }
        
        return C;
    }
};
