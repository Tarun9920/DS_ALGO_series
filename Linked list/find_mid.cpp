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
int main(int argc, const char * argv[]) {
    struct Node *head= NULL;
    head= insert(head, 6);
    head= insert(head, 5);
    head= insert(head, 4);
    head= insert(head, 3);
    head= insert(head, 2);
    head= insert(head, 1);
    cout<<find_mid(head);
    cout<<"\n";
    return 0;
}
