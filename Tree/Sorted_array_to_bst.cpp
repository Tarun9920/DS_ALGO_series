#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
Node *left,*right;
};

struct Node *inserting(Node *root,int data)
{
if(root== NULL) {
Node *t= new Node();
t->left= t->right= NULL;
return root;
}
if(root->data < data)
root->right= inserting(root->right,data);
else
root->left= inserting(root->left,data);
}

Node *sorted_array_to_bst(int *A,int s,int e)
{
if(s>e) return NULL;
int m= (s+e)/2;
Node *root= new Node();
root->data= A[m];
root->left= sorted_array_to_bst(A,s,m-1);
root->right= sorted_array_to_bst(A,m+1,e);
return root;
}
void inorder(Node *root)
{
if(root)
{
inorder(root->left);
cout<<root->data<<"\t";
inorder(root->right);
}
}
int main()
{
int A[]={2,4,6,78,467,4536,46767};
Node *root= NULL;
root= sorted_array_to_bst(A,0,6);
cout<<"Inorder traversal is ::\n";
inorder(root);
return 0;
}
