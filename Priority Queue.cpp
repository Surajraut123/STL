#include <iostream>
#include <queue>
using namespace std;

int main(){
    //MAX_heap
    priority_queue<int> maxi;

    //MIN heap
    priority_queue<int ,vector<int>, greater<int> >mini;

    maxi.push(1);
    maxi.push(0);
    maxi.push(4);
    maxi.push(2);

    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }//output-->4 2 1 0  Taking first element
    cout<<endl;

    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }//output-->0 1 2 4 Taking first element
    cout<<endl;

    cout<<"Empty or not "<<mini.empty()<<endl;//output-->1

   

}