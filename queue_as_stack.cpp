#include <iostream>
#include<vector>
#include<queue>
using namespace std;


void add(int t, queue<int>&q)
{
    q.push(t);
    cout<<"Item "<<t<<"\t inserted!!!\n";
}
void top(queue<int>&q)
{
    if(!q.empty())
        cout<<"Front is :: "<<q.front()<<"\n";
    else cout<<"Empty Queue\n";
}
void deleting(queue<int>&q)
{
    queue<int>q2;
    int t;
    while(q.size()>1)
    {
         t= q.front();
        q.pop();
        q2.push(t);
    }
    if(q.size()==1)
    {
        t= q.front();
        q.pop();
        cout<<"Element deleted is :: "<<t<<"\n";
    }
    q=q2;
}

int main(int argc, const char * argv[]) {
    queue<int>q;
    add(10, q);
    add(20, q);
    add(30, q);
    add(40, q);

    top(q);
    deleting(q);
    top(q);
    
    return 0;
}
