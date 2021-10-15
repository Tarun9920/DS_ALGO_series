class Solution {
public:
    bool isPalindrome(string A) {
        int i,j,k;
        j=0;
        k= A.size()-1;
        for(i=0;i<A.size();i++)
        {
            if(A[i]>='A' && A[i]<='Z')
                A[i]= A[i]+ ('a'-'A');
          //  cout<<A[i];
        }
        
        while(j<=k)
        {
          if(!(A[j] >='a' && A[j]<='z' || A[j] >='0' && A[j]<='9'  ))
          {
              j++;
              continue;
          }
            
          if(!(A[k]>='a' && A[k]<='z' || A[k] >='0' && A[k]<='9'))
            {
                k--;
                continue;
            }
            
            if(A[j]== A[k])
            j++,k--;
            else return false;
        }
        return true;
    }
};
