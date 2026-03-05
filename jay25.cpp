#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    unordered_map<char, int> mpp;

    for(char ch: s){
        mpp[ch]++;
    }

    for(auto x: mpp){
        cout<<x.first<<": "<<x.second<<endl;
    }
    cout<<endl;
    return 0;


}