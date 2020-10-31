#include <bits/stdc++.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int countit(TreeNode* root, int d)
    {
        if(root==NULL || d<0)
            return 0;
        
        if(d==0)
        {
            if(root->left==NULL && root->right==NULL)
                return 1;
            return 0;
        }
        
        return countit(root->left,d-1) + countit(root->right,d-1);
    }
    
    int countPairs(TreeNode* root, int distance) {
        
        if(root==NULL)
            return 0;
        
        int ans,d;
        
        ans=0;
        
        for(int i=1; i<=distance; i++)
        {
            d=i;
            for(int j=1; j<d; j++)
            {
                ans+=countit(root->left,j-1)*countit(root->right,d-j-1);
            }
        }

        return ans + countPairs(root->left,distance) + countPairs(root->right,distance);
    }
};