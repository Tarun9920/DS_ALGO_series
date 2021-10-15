class Solution {
public:
    int removeElement(vector<int>& A, int p) {
        int k=0,i;
        for(i=0;i<A.size();i++)
        {
            if(A[i]!=p)
                swap(A[i],A[k++]);
        }
        return k;
    }
};
