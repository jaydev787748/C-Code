#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int i=0, j = size-1;

    while(i<j){
        swap(arr[i++], arr[j--]);
    }
}

int main(){
    int n, m;
    cout<<"Enter Size: \n";
    cin>>n>>m;

    int arr[n][m];

    cout<<"Enter Elements: \n";

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;

}