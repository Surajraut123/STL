#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Suraj");
    s.push("Raut");
    s.push("Kumar");

    cout<<"Top Element "<<s.top()<<endl;//Outut-->Kumar
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;//Outut-->Raut

    cout<<"Size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;

}