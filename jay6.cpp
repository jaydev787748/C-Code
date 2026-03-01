#include<iostream>
using namespace std;

class node{
    public:
    float data;
    node* next;
    node(float val){
        data=val;
        next=NULL;
    }
};

node* insertAtHead(node* head,float x) {
    node n(x);
    n.next=head;
    return &n;

}

node* insertAtTail(node* head,float x) {
 node n=new node(x);
 node* temp=head;
 if(head==NULL){
    //head=&n;
    return &n;
 }
 while(temp->next){
    temp=temp->next;
 }

}

node* 

void Search(node* head,int x){
    if(head==NULL){
        return ;
    }
    node* temp=head;
    while(temp){
        if(temp->data==x){
            cout<<"Yeas\n";
            return ;
        }
        else{
            temp=temp->next;
        }
    }
    cout<<"No"<<endl;
    return ;
}
int main(){
    node n1(5);
    node n2(56);
    n1.next= &n2;
    cout<<n1.data<<endl;
    return 0;

} 
