#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j,k;
vector<int>V;


// vector basics..
// push into vector
V.push_back(0);
V.push_back(36);
V.push_back(3);
V.push_back(25);
V.push_back(4746);
V.push_back(632);

// sizeof vector
cout<<"sizeof vector is ::\t"<<V.size()<<"\n";

// pop last element vector
V.pop_back();


// map basics. :
// inserting into map...

map<int,int> mymap;

// inserting into map
mymap[10]++;
mymap[50]= 4;
mymap[300]++;

// check if key exist in map ::
cout<<"check if 10 exist::\t";
if(mymap.find(10)!= mymap.end()) cout<<"Key exist!!!";
else cout<<"Key not exist !!!!";

cout<<"\n\nSize of map is ::\t"<<mymap.size();

// iterate over the map ::
map<int,int>::iterator it;
cout<<"\n\nKey\t\tValue ::\n";
for(it= mymap.begin();it!= mymap.end();it++)
{
cout<<it->first<<"\t\t"<<it->second<<"\n";
}

return 0;
}
