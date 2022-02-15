#include <iostream>
#include <map>

using namespace std;
//Time Complexity : O(logn)
int main(){
    map<int,string>m;
    m[1] = "Suraj";
    m[2] = "Love";
    m[3] = "Kumar";

    m.insert({5,"BHEEM"});

    for(auto i:m){
        cout<<i.first<<i.second<<endl;// 1 2 3 always come in sorted order
    }

    cout<<"Findng"<<m.count(13)<<endl;//1

}