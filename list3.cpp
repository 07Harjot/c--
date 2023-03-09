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
void addnodeatleft(node *&head,int data){
    node *temp=new node(data);
    temp->data=data;
    temp->next=head;
    head=temp;
}

void addnodeatright(node *&head,int data){
    node *temp=new node(data);
    head->next=temp;
    temp->next=NULL;

}
void insert(node *&head,int data,int position){

    node *temp=new node(data);
    node *ptr=head;
    int count=1;
    while(count<position-1){
        ptr=ptr->next;
        count++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}
void print(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main(){
    node *n=new node(30);
    node *head=n;
     //addnodeatright(head,123);
    addnodeatleft(head,17);
    addnodeatleft(head,90);
     addnodeatleft(head,60);
      addnodeatleft(head,50);
    insert(head,46,2);
print(head);
}