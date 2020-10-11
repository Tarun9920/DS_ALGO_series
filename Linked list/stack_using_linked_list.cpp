#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
Node *next;
};

Node *push_on_stack(Node *head,int data,int &size_of_stack)
{
Node *t= new Node();
t->data= data;
t->next= head;
++size_of_stack;
return t;
}
Node *pop_from_stack(Node *head,int &val)
{
if(head== NULL) return NULL;
Node *t= head;
head= head->next;
delete t;
val--;
return head;
}

void print(Node *head)
{
cout<<"Linked list is ::\n";
while(head!= NULL)
{
cout<<(head->data)<<"\t";
head= head->next;
}
cout<<"\n";
}
void stack_top(Node *head)
{
if(head== NULL) cout<<"Stack is empty !!!!";
else cout<<"\nTop elements of stack is ::\t"<<head->data;
}
int main()
{
Node *head= NULL;
int size_of_stack=0;

cout<<"Push elements into the stack ::\n";
head= push_on_stack(head,10,size_of_stack);
head= push_on_stack(head,20,size_of_stack);
head= push_on_stack(head,50,size_of_stack);
head= push_on_stack(head,70,size_of_stack);
head= push_on_stack(head,80,size_of_stack);
head= push_on_stack(head,1240,size_of_stack);
head= push_on_stack(head,52,size_of_stack);
head= push_on_stack(head,486,size_of_stack);
head= push_on_stack(head,-234,size_of_stack);
print(head);
cout<<"Pop Elements from the stack ::\n";
head= pop_from_stack(head,size_of_stack);
cout<<"\nSize of stack is ::\t"<<size_of_stack;

stack_top(head);
return 0;
}
