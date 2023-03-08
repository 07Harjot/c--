#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this->data= data;
        this->next=NULL;
    }
};
void insertattail(node * &tail,int data){//ending node ke agge new node add karega 

//new node 
node *temp=new node(data);
tail->next=temp;
tail=temp;
}
void print(node * &head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    
}
int main(){
    node * node1=new node(10);
    node *head=node1;
    node *tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);

}