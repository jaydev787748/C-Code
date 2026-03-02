#include<iostream>
// #include<algorithm>
using namespace std;

// void reverse(int a, int b){
//     cout<<" huu";
// }

int main(){
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    cout<<s.length()<<endl;
    return 0;
}