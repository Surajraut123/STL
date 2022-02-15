#include <iostream>
#include <list>

using namespace std;

// Random Access is not possible we have to travel

int main(){
    list<int> l;
    // list<int> p(l)//copy.

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";//output-->2 1
    }
    cout<<"Size of list "<<l.size();

    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
}