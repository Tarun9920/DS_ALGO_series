#include <bits/stdc++.h>
using namespace std;

int main(){
    // Definition: Pair is a container which can store two data elements
    // How to define: pair<dataType1, dataType2>PairName;
    // How to assign values: To access first element we use first with . operator and to access second element we use second with . operator
    // E.g. PairName.first = 1, PairName.second = "India"

    pair<int,string>country;
    country.first = 1;
    country.second = "India";

    cout<<"Pair is -> First element: "<<country.first<<" Second element: "<<country.second;
return 0;
}