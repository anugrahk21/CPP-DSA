#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;  // Initialize next to nullptr in the constructor of the Node class.
        // this line is equivalent to:
        // next = nullptr;  // Initialize next to nullptr in the constructor of the Node class.
        // However, it is more efficient and recommended to use this form.
    }
};

void insertathead(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;  // If the list is empty, we set head and tail to the new node and return.
    }
    newNode->next=head;
    head=newNode;
};

void insertatend(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;  // If the list is empty, we set head and tail to the new node and return.
    }
    tail->next=newNode;
    newNode->next=NULL;
    tail=newNode;
}
void display(Node* &head){
    Node* tempNode=head;
    while(tempNode!=NULL){
        cout<<tempNode->data<<" ";
        tempNode=tempNode->next;
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"Inserting at head : ";
    insertathead(head,tail,5);
    insertathead(head,tail,15);
    insertathead(head,tail,25);
    display(head); //25 15 5
    cout<<endl;
    insertatend(head,tail,10);
    insertatend(head,tail,20);
    insertatend(head,tail,30);
    cout<<"Inserting at end : ";
    display(head); //25 15 5 10 20 30
    cout<<endl;
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data;
    

}