#include<iostream>
using namespace std;

int main() {
   int x = 4;
   int &y = x;
   y++;
   x++;
   cout<<"X , Y : "<<x<<" "<<y<<endl;


    return 0;
}