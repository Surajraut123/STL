#include <iostream>
#include <set>
using namespace std;
//Stored all unique element. It stored each element at once
//If we stored 5 in five times in set, then it will return 1. After insert not be modified.
//Elements are returned in sorted order.
//Order set is slower than unorder set.
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    //Time Complexity - O(nlogn)
    for(int i:s){
        cout<<i<<" "<<endl;//output-->1 2 4 5.
    }
    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" "<<endl;//output--> 2 4 5.
    }

    cout<<"5 is present or not"<<s.count(5)<<endl;//-->1
    set<int>::iterator itr = s.find(5);
    cout<<"Value at itr"<<*itr<<endl;




}