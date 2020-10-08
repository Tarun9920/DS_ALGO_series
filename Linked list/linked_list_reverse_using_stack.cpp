#include<bits/stdc++.h>
using namespace std;

struct Node {
int data;
struct Node *next;
};

// insert of linked list on top
Node *inserting(Node *head,int data)
{
Node *temp= new Node();
temp->data= data;
temp->next= head;
return temp;
}

// find middle of linked list
Node *find_middle(Node *head)
{
Node *s,*f;
s=f=head;
while(f!= NULL && f->next != NULL)
{
s= s->next;
f= f->next->next;
}
return s;
}

// check for loop in linked list
bool check_for_loop(Node *head)
{
Node *slow,*fast;
slow= fast= head;
while(fast!= NULL && fast->next!= NULL)
{
slow = slow->next;
fast= fast->next->next;
if(slow== fast) return true;
}
return false;

}

// print the list
void print(Node *head)
{
while(head!= NULL)
{
cout<<(head->data)<<"\t";
head= head->next;
}
}

// reverse the linked list list using 3 pointer...
Node *reverse_list_fun(Node *head)
{
Node *prev,*nex;
prev= NULL;
while(head!= NULL)
{
nex= head->next;
head->next= prev;
prev= head;
head= nex;
}
return prev;

}

// reverse the lists using stack
Node *rev_list(Node *head)
{
Node *new_head= NULL;
stack<Node *>S;
while(head!= NULL)
{
S.push(head);
head= head->next;
}
head= new_head= S.top();
S.pop();
while(S.empty()== false)
{
head->next= S.top();
S.pop();
head= head->next;
}
head->next= NULL;
return new_head;
}


int main()
{
Node *head= NULL;
head= inserting(head,2);
head= inserting(head,5);
head= inserting(head,352);
head= inserting(head,5336);
head= inserting(head,689);
head= inserting(head,123);
head= inserting(head,890);
cout<<"Linked list is ::\n";
print(head);
cout<<"\nReverse the linked list using Stack ::\n";
head= rev_list(head);
cout<<"Reversed list is ::\n";
print(head);

return 0 ;
}
