#include<iostream>
using namespace std;

class complex{
    public:
    int real;
    int img;
    complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }
    complex operator +(complex c1){
        complex c;
        c.real=real+c1.real;
        c.img=img+c1.img;
        return c;
    }
    virtual void display(){
        cout<<"hu"<<endl;
    }
    friend class tro;
};
class tro{
    int y;
};
int main(){
    complex c1(3,6);
    complex c2(6,8);
    complex c3;
    c3=c1+c2;
    cout<<c3.real<<endl;
    return 0;
}