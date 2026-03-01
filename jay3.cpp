#include<iostream>
using namespace std;

class student{
    public:
    string name;
    float *cgpa;

    student(string name,float cgpa){
        this->name=name;
        this->cgpa=&cgpa;
    }
    student(student &obj){
        name=obj.name;
        cgpa=new float;
        *cgpa=*(obj.cgpa);
    }
    ~student(){
        
    }
};
int main(){
    student s1("jaydev",7.4);
    student s2(s1);
    *(s2.cgpa)=2.5;
    cout<<*(s1.cgpa)<<endl;
    return 0;
}