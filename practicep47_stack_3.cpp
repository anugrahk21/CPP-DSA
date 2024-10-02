#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    };
};

void push(Node* &head,int k){
    Node* newNode=new Node(k);
    if(head==NULL){
        head=newNode;
        return;
    };
    newNode->next=head;
    head=newNode;
};

void pop(Node* &head){
    Node* temp=head;
    cout<<"Binary representation: ";
    while(temp!=NULL){
        cout<<temp->data;
        head=temp->next;
        delete temp; // Delete the current node (head)
        temp=head; //making temp=head(the new head)
    };
};

void binaryrep(int data,Node* &head){
    
    if(data==0){
        cout<<"No";
        return;
    };
    while(data>0){
        int k=data%2;
        push(head,k);
        data=data/2;
        
    }
    
};


int main(){
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"Enter a number: ";
    int data;
    cin>>data;
    binaryrep(data,head);
    pop(head);
}