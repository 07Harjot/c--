#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;

node(int data){
    this->data=data;
    this->next=NULL;
}
};
void insertattail(node *&head,int data){
    node *ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
    }
    node *temp=new node(data);
    ptr->next=temp;
}
void print(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
void delet
int main(){
    node *n=new node(20);
    node *head =n;
    insertattail(head,90);
    print(head);

}