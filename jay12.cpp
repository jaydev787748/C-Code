#include<iostream>
#include<vector>
using namespace std;


int change(int &x){
    x++;
    return x;
}

int main(){
    int x = 5;
    cout<<change(x)<<" "<<x<<endl;
    return 0;
}
