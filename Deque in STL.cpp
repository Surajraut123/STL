#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";//output--> 2 1
    }

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";//output//2
    // }
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";//1
    }

    cout<<"Front "<<d.front()<<endl;//Gives first element
    cout<<"Back "<<d.back()<<endl;//Gives second element

    cout<<"Position of array "<<d.at(2)<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;

    //Before Erase
    cout<<"Before Erase Size : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//It will delete first element
    cout<<"After erase Size : "<<d.size()<<endl;

}