#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> s;

    s.push("Suraj");
    s.push("Raut");
    s.push("Kumar");

    cout<<"Top Element "<<s.front()<<endl;//Outut-->Suraj
    s.pop();
    cout<<"Top Element "<<s.front()<<endl;//Outut-->Raut

    cout<<"Size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;

}