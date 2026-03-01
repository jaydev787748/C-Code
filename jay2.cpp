#include<iostream>
using namespace std;

class teacher{
    float salary;
    public:
    string name;
    string dep;
    string subject;
    teacher(){
        name="jaydev";
        dep="btech";
        subject ="math";
        salary=55000;
    }
    teacher(string name,string dep,string subject){
        this->name=name;
        this->dep=dep;
    }
    teacher(teacher &obj){
        name=obj.name;
    }
    void getInfo() {
        cout<<"Name: "<<name<<endl<<"Dep: "<<dep<<endl<<"Subject: "<<subject<<endl;
    }
    

    void changeDep(string newDep){
        dep=newDep;
    }
    void setSalary(float x){
        salary=x;
    }
    float getSalary(){
        return salary;
    }
};

int main() {
    teacher t1;
    t1.name="jaydev";
    t1.dep="btech";
    t1.subject="oops";
    // t1.salary=49;
    // cout<<t1.salary<<" ";
    t1.setSalary(23489);
    // cout<<t1.getSalary()<<endl;
    teacher t2(t1);
    t1.getInfo();
    return 0;
}
