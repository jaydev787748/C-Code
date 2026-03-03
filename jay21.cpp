#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    int roll;
    float cgpa;
    static int count;

    Student(){
        name = "unKnown";
        count++;
    }

    Student(string name, int roll, float cgpa){
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"RollNum: "<<roll<<endl;
        cout<<"Cgpa: "<<cgpa<<endl;
    }

};
int Student::count = 0;


int main(){
    Student s1;
    s1 = Student("jay dev", 137828, 9.5);

    s1.display();

    cout<<"Count: "<<Student::count<<endl;
    return 0;
}