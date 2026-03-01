#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    person(){
        cout<<"parents class constructor\n";
    }
};
class student :public person{
    public:
    int rollnum;
    student(){
        cout<<"child class constructor \n";
    }
};
int  main(){
    student s1;
    return 0;
}