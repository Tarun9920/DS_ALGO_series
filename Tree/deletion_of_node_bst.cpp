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

Node *maximum(Node *root)
{
if(root== NULL) return root;
while(root->right != NULL)
root= root->right;

return root;

}

Node *delete_in_bst(Node *root,int data)
{
// first find if data exist !!!
if(root== NULL)
// not exist...
return NULL;

if(root->data > data)
{
root->left= delete_in_bst(root->left,data); // go left
}
else if(root->data < data)
{
root->right= delete_in_bst(root->right,data);
}
else // found the element...
{
if(root->left!= NULL && root->right!= NULL)
{
Node *replace_root= maximum(root->left);
root->data= replace_root->data;
root->left= delete_in_bst(root->left,replace_root->data);
// find the maximum element on left of tree...
}
// if only 1 child exist..

else if(root->left!= NULL)
{
Node *del= root;
root= root->left;
delete del;
}
else
{
Node *del= root;
root= root->right;
delete del;
}

}
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
int A[]={2,4,6,78,95,255,467,656,767,888,9009};
Node *root= NULL;
root= sorted_array_to_bst(A,0,10);
cout<<"Inorder traversal is ::\n";
inorder(root);
cout<<"\nDeleting 255,656\n";
root= delete_in_bst(root,255);
root= delete_in_bst(root,656);
inorder(root);
return 0;
}
