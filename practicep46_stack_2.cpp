#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void push(Node* &head,Node* &tail,int data){
    cout<<"Pushed "<<data<<endl;
    Node* newnode= new Node(data);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    };
    newnode->next=head;
    head=newnode;
};

void pop(Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"Stack is empty!"<<endl;
        return;
    };
    cout<<"Popped "<<head->data<<endl;
    Node *temp=head; //we dont want to delete head directly
    head=temp->next;
    delete temp; //deleting the last element of the stack

}

void display(Node* &head,Node* &tail){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    };
};

int main(){
    int choice,data;
    Node* head=NULL;
    Node* tail=NULL;
    while(true){

        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter data: ";
            cin>>data;
            push(head,tail,data);
            cout<<"Stack now: ";
            display(head,tail);
            cout<<endl;
        }
        else if(choice==2){
            pop(head,tail);
            cout<<"Stack now: ";
            display(head,tail);
            cout<<endl;
        }
        else if(choice==3){
            cout<<"Data inside stack: ";
            display(head,tail);
            cout<<endl;
        }
        else if(choice==4){
            cout<<"Exiting...";
            return false; //or break, return 0, false
        }
        else{
            cout<<"Invalid choice! Try again."<<endl;
        };

    };
}
