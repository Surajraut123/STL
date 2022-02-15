#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<binary_search(v.begin(),v.end(),3)<<endl;//-->1
    cout<<"Lower Bound "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;//2
    cout<<"Upper Bound "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;//2

    int a=1;
    int b=3;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    string str = "Suraj";
    reverse(str.begin(),str.end());
    cout<<str;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After Rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";//2 3 4 1
    }

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";//1 2 3 4 
    }



}