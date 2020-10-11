#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
Node *next;
};

Node *push_on_queue(Node *head,Node **rear,int data,int &size_of_queue)
{
Node *t= new Node();
t->data= data;
t->next= NULL;
++size_of_queue;
if(*rear== NULL)
{
head= *rear= t;
}
else
{
(*rear)->next= t;
(*rear)= (*rear)->next;
}
return head;
}
Node *pop_from_queue(Node *head,Node **rear,int &val)
{
if(head== NULL){
*rear= head= NULL;
return NULL;
}
Node *t= head;
head= head->next;
if(head== NULL)
{
*rear= NULL;
}
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
void queue_top(Node *head)
{
if(head== NULL) cout<<"queue is empty !!!!";
else cout<<"\nTop elements of queue is ::\t"<<head->data;
}
int main()
{
Node *head= NULL,*rear= NULL;
int size_of_queue=0;

cout<<"Push elements into the queue ::\n";
head= push_on_queue(head,&rear,10,size_of_queue);
head= push_on_queue(head,&rear,20,size_of_queue);
head= push_on_queue(head,&rear,50,size_of_queue);
head= push_on_queue(head,&rear,70,size_of_queue);
head= push_on_queue(head,&rear,80,size_of_queue);
head= push_on_queue(head,&rear,1240,size_of_queue);
head= push_on_queue(head,&rear,52,size_of_queue);
head= push_on_queue(head,&rear,486,size_of_queue);
head= push_on_queue(head,&rear,-234,size_of_queue);
print(head);
cout<<"Pop Elements from the queue ::\n";
head= pop_from_queue(head,&rear,size_of_queue);
head= pop_from_queue(head,&rear,size_of_queue);
print(head);
cout<<"\nSize of queue is ::\t"<<size_of_queue;

queue_top(head);
return 0;
}
