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
void delete_last(Node **head)
{
    int d;
    Node *h,*h2;
    h= *head;
    if(h == NULL)
    return;
    if(h->next == NULL)
    {
        delete(h);
        *head= NULL;
    }
    while(h->next)
    {
        //d= h->data;
        h2= h;
        h= h->next;
    }
    h2->next= NULL;
    cout<<"DATA DELETED : "<<h->data;
    delete(h);
}
void print(Node *head)
{
    while(head)
    {
        cout<<head->data<<"\n";head=head->next;
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
    print(head);
    cout<<"\n";
    return 0;
}
