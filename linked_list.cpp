#include <iostream>
using namespace std;

struct node{
    int data;
    node*next;
    
    node(int val){
        data=val;
        next=nullptr;
    }
};
void printNode(node*head){
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
};
int main() {
    node*head=new node(10);
    head->next=new node(20);
    head->next->next= new node(50);
    printNode(head);
    return 0;
}
