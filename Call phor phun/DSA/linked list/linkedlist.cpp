#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head = n;
}

void insertEnd(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while (temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
}

void dispaly(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    node* head=NULL;
    
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertHead(head, 4);
    dispaly(head);
    cout<<search(head, 3);

    return 0;
}
