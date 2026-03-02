#include<iostream>
using namespace std;

bool isPalindrome(string &s){
    string rev = s;
    reverse(s.begin(), s.end());

    return rev == s? true: false;
}

int main(){
    string s;
    getline(cin, s);
    isPalindrome(s);

    cout<<s<<endl;
    return 0;

}