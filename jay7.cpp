#include<iostream>
using namespace std;

class node{
    public:
    float data;
    node* next;
    node(float val){
        data=val;
    }

};
class list{
    node* head;
    node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int x){
        node* n=new node(x);
        if(head==NULL){
            head=tail=n;
            return;
        }
        else{
            n->next=head;
            head=n;
        }
    }
    void push_back(int x){
        node* n=new node(x);
        if(head==NULL){
            head=tail=n;
            return;
        }
        
        tail->next=n;
        tail=n;
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        node* temp=head;
        head=head->next;
        
        if(temp==tail){
            tail=NULL;
        }
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            return;
        }
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
        if(tail==NULL){
            head=NULL;
        }
    }
    int search(int val){
        node* temp=head;
        int i=0;
        while(temp!=NULL){
            if(temp->data==val){
                return i;
            }
            i++;
            temp=temp->next;
        }
        return -1;
    }
    void printList(){
        node* temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}