#include<iostream>
#include<set>
using namespace std;

int main()
{
set<int> stt;

stt.insert(1);
stt.insert(23);
stt.insert(34);
stt.insert(45);


for(auto it = stt.begin(); it != stt.end(); it++){
    cout << *it << endl;
}


return 0;

}