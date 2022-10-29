#include<bits/stdc++.h>

using namespace std;

void update_element(stack<int>&s, stack<int>&s2)
{
    int t;
    if(s2.size()==0)
    {
        while(s.size()>0)
        {
            t= s.top();
            s.pop();
            s2.push(t);
        }
    }
}
void add_element(int x, stack<int>&s)
{
    s.push(x);
}

void pop_element(stack<int>&s, stack<int>&s2)
{
    int t;
    if(s2.size()==0)
    update_element(s,s2);

    if(s2.size()==0) {
        cout<<"No element!!!\n";
        return ;
    }
     t= s2.top();
    s2.pop();
    cout<<"Element removed is :: "<<t<<"\n";
}

void top_element(stack<int>&s, stack<int>&s2)
{
    if(s2.size()==0)
    update_element(s,s2);

    if(s2.size()==0) {
        cout<<"Stack is empty!!!!";
    }
    cout<<"TOP ELEMENT IS :: "<<s2.top()<<"\n";

}

int main()
{
    // remove element from stack
    stack<int>s,s2;
    add_element(50,s);
    add_element(40,s);
    add_element(30,s);
    add_element(20,s);

    top_element(s,s2);
    pop_element(s,s2);
    pop_element(s,s2);
    pop_element(s,s2);
    pop_element(s,s2);
    pop_element(s,s2);


}
