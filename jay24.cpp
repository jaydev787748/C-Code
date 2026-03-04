#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> mpp;
    vector<int> v = {2, 4, 5, 2, 3, 4, 2};

    for(int x: v){
        mpp[x]++;
    }

    for(auto x: mpp){
        cout<<x.first<<": "<<x.second<<endl;
    }

    // cout<<"Size: "<<mpp.size()<<endl;
    return 0;
}