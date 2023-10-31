#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    struct Node *next;
};

struct Node *insert(Node *head, int data)
{
    struct Node *t= new Node();
    t->data = data;
    t->next= head;
    return t;
}
void delete_first(Node *head)
{
    int d;
    Node *h;
    if(head)
    {
        d= head->data;
        h= head;
        cout<<"DATA IS : "<<d;
        head= head->next;
        delete(h);
    }
}
int main(int argc, const char * argv[]) {
    struct Node *head= NULL;
    head= insert(head, 6);
    head= insert(head, 5);
    head= insert(head, 4);
    head= insert(head, 3);
    head= insert(head, 2);
    head= insert(head, 1);
    delete_first(head);
    cout<<"\n";
    return 0;
}
