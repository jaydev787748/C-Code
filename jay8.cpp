#include<iostream>
using namespace std;

class node{
    float data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node* copyList(node* head){
    if(head==NULL){
        return NULL;
    }
    node* head2=new node(head->data);
    node* temp1=head;
    node* temp2=head2;
    while(temp1!=NULL){
        temp2->next=new node(temp1->data);
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return head2;

}
int main(){

}