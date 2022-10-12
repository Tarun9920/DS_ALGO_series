#include <iostream>
#include <vector>

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
int find_mid(Node *head)
{
    Node *s,*f;
    s=f=head;
    while(f && f->next)
    {
        s= s->next;
        f= f->next->next;
    }
    return s->data;
}
bool find_loop(Node *head)
{
    Node *s,*f;
    s=f=head;
    while(f&& f->next)
    {
        s= s->next;
        f= f->next->next;
        if(s==f)
            return true;
    }
    return false;
}
struct Node *rev(Node *head)
{
    Node *c,*n,*p;
    p= NULL;
    c= head;
    while(c!=NULL)
    {
        n= c->next;
        c->next = p;
        p= c;
        c= n;
    }
    return p;
}
void print(Node *h)
{
    while(h!=NULL)
    {
        cout<<h->data<<"\n";
        h= h->next;
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
    head= rev(head);
    cout<<"After Reversal\n";
    print(head);
    return 0;
}
