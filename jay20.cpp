#include<iostream>
using namespace std;

struct Student{
    string name;
    int roll;

    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
};

int main(){
    Student s1("jaydev", 137828);
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll_Num: "<<s1.roll<<endl;
    return 0;

}