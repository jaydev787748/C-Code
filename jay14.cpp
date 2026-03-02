#include<iostream>
#include<climits>
using namespace std;

long long factorial(int n){
   if(n == 0) return 1;

   return n * factorial(n-1);
}

void printArray(int arr[], int size){
   for(int i=0; i<size; i++){
      cout<<arr[i]<<endl;
   }
}

int main(){
   string s;
   cout<<"Enter String\n";
   getline(cin, s);
   
   for(char ch: s){
    cout<<ch<<" ";
   }

   cout<<"Factorail of 5: "<<factorial(5)<<endl;
   return 0;
}