#include <iostream>
#include <vector>
using namespace std;

int main(){
    // It is an dynamic array location.
    // If we created 4 size of vector. If want to add one element in that.
    // Now, in this case vector will create a new vector with double size compare to first.
    // And all old values and new value are copied in newly created vector
    //  therefore it called as dynamic.
    // And old vector will dummped automatically

    vector<int> v;
    cout<<"Size : "<<v.capacity()<<endl;//Output is zero.

    // If we Know the size of vector
    vector<int> a(5,1);//5 Means size of vector and 1 means initialised

    //If we want to copy vector from one another.
    //All elements of vector a copied in p.
    vector<int> p(a);
    for(int i:p){
        cout<<i<<" ";
    }cout<<endl;

    // insert element
    v.push_back(1);
    cout<<"Size : "<<v.capacity()<<endl;//-->output = 1

    v.push_back(2);
    cout<<"Size : "<<v.capacity()<<endl;//-->Output = 2

    v.push_back(3);
    cout<<"Size : "<<v.capacity()<<endl;//-->output = 4

    v.push_back(4);
    cout<<"Size : "<<v.capacity()<<endl;//-->output = 4

    v.push_back(5);
    cout<<"Size : "<<v.capacity()<<endl;//-->output = 8

    v.push_back(6);
    cout<<"Size : "<<v.capacity()<<endl;//-->output = 8

    v.push_back(7);
    cout<<"Size : "<<v.capacity()<<endl;//-->output = 16

    cout<<"Size : "<<v.size()<<endl;//-->Output = 7

    // Capacity : Show How many space are placed in vector.
    //Size : Shows how many elements are present in vector.

    cout<<"Elements at 2nd index"<<v.at(2)<<endl;

    cout<<"Front "<<v.front()<<endl;//Gives first element
    cout<<"Back "<<v.back()<<endl;//Gives second element

    cout<<"Pop vector "<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }


    // While clearing vector, size will be clear. but, vector capacity will not cleared
    cout<<"Before Clear Size : "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size : "<<v.size()<<endl;



}