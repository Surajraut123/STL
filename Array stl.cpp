#include <iostream>
#include <array>
using namespace std;

int main(){
    // Normal Array
    // int arr[3] = {1,2,3};

    // STL Array
    array<int,4>a;
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Position of array "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
}