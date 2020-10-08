#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left,*right;
};

// insertion into BST....
Node *insertion(Node *root,int data)
{
if(root== NULL) {
Node *temp= new Node();
temp->left= temp->right= NULL;
temp->data= data;
return temp;
}
if(root->data >= data)
{
root->left= insertion(root->left,data);
}
else
{
root->right= insertion(root->right,data);
}
return root;
}

// check into BST..
bool check_data(Node *root,int data)
{
if(root== NULL) return false;
if(root->data== data) return true;
if(root->data < data) return check_data(root->right,data);
else return check_data(root->left,data);
}

// count nodes
int count_node(Node *root)
{
if(root== NULL) return 0;
return 1+ count_node(root->left) + count_node(root->right);
}

// count height....
int height(Node *root)
{
if(root==NULL) return 0;
return 1+ max(height(root->left), height(root->right));

}

// count leaf nodes....
int count_leaf(Node *root)
{
if(root== NULL) return 0;
if(root->left== NULL && root->right == NULL) return 1;
return count_leaf(root->left)+ count_leaf(root->right);
}

int main()
{
Node *root= NULL;
root= insertion(root,1000);
root= insertion(root,1200);
root= insertion(root,1100);
root= insertion(root,804);
root= insertion(root,20);

root= insertion(root,250);
root= insertion(root,9990);
root= insertion(root,100);
root= insertion(root,1);
root= insertion(root,12);
cout<<"Total size of tree is ::\t"<<count_node(root);
cout<<"\nHeight of tree is ::\t"<<height(root);
return 0;
}
