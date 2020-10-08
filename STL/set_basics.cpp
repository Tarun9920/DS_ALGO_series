#include<bits/stdc++.h>
using namespace std;
int main()
{
// set basics
set<int>myset;
myset.insert(1);
myset.insert(50);
myset.insert(45);
myset.insert(345);
myset.insert(367);

// check for duplicate :
if( myset.find(50)!= myset.end())
{
cout<<"ELEMENT already exist!!!";
}
// check the size of set
cout<<"Set size is ::\t"<<myset.size()<<"\n";

// iterate in set;
cout<<"Iterating over set ::\n";
set<int>::iterator it ;
for(it= myset.begin();it!= myset.end();it++)
{
cout<<(*it)<<"\n";
}
// remove element in set
myset.erase(50);
cout<<"set size is ::\t"<<myset.size();
return 0 ;
}
