#include<iostream>
#include<climits>
using namespace std;

int main(){
   string s;
   cout<<"Enter String\n";
   getline(cin, s);
   
   for(char ch: s){
    cout<<ch<<" ";
   }
   cout<<endl;
   return 0;
}