#include <iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* createNode()
{
    Node *t= new Node();
    t->left= t->right= NULL;
    return t;
}

Node* insert(Node *root,int data)
{
    if(!root)
    {
        Node *t= createNode();
        t->data = data;
        return t;
    }
    else
    {
        if(root->data < data)
        {
            root->right = insert(root->right, data);
        }
        else
        {
            root->left = insert(root->left, data);
        }
    }
    return root;
}

void level_order_traversal(Node *root)
{
    if(!root)
    {
        cout<<"Empty eroot!!!";
        return;
    }
    Node *t;
    queue<Node*>q;
    q.push(root);
    while (!q.empty()) {
        t= q.front();
        q.pop();
        cout<<t->data<<"\n";
        if(t->left)q.push(t->left);
        if(t->right)q.push(t->right);
    }
}
void inorder(Node *root)
{
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<"\t"; 
    inorder(root->right);
}
int main(int argc, const char * argv[]) {
    Node *root=NULL;
    root= insert(root, 40);
    root= insert(root, 10);
    root= insert(root, 100);
    root= insert(root, 30);
    root= insert(root, 50);
    cout<<"InOrder Traversal is\n";
    inorder(root);
    cout<<"\n";
    return 0;
}
