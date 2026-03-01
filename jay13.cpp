#include<iostream>
using namespace std;

int multiply(int a, int b = 2){
    return a*b;
}

int sum(int a, int b){
    return a+b;
}

double sum(double a, double b){
    return a+b;
}

int main(){
   cout<<multiply(3);
   return 0;
}