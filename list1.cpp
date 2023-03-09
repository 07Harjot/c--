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
void insertathead(node * &head,int data){
//new node 
node *temp=new node(data);
temp->next=head;
head=temp;
}
void print(node * &head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    
}
void insertatmiddle(node * &head,int position,int data){
    node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node *insertion=new node(data);
    insertion->next=temp->next;
    temp->next=insertion;

}
int main(){
    node * node1=new node(10);
    node *head=node1;
    print(head);
    insertathead(head,12);
    print(head);

}
