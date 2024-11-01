#include <iostream>
using namespace std;

//Remove Duplicates from Sorted List using linked list

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    };
};

class Solution{
    public:
    Node* removeduplicates(Node* head){
        Node* nodupli=new Node(0);//just a dummy node(new ll for non duplicates)
        Node*temp=nodupli;
        // Traverse the original list
        while(head!=NULL){
            // Check if the current node is unique (last node or not equal to the next node)
            if(head->next==NULL|| head->data!=head->next->data){
                temp->next=head;
                temp=temp->next;
            }
            head=head->next; //next node of the original array.
        };
        return nodupli->next; //head return(skipping the 1st unwanted node)
    };

    void insert(Node*&head,Node*&tail,int data){
        Node* newNode=new Node(data);
        if(head==NULL || tail==NULL){
            head=newNode;
            tail=newNode;
            return;
        };
        tail->next=newNode;
        tail=newNode;
    };

    void print(Node* head){
        if(head==NULL){
            cout<<"Empty LinkedList"<<endl;
            return;
        };
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        };
    }
};

int main(){
    Node* head=NULL;
    Node*tail=NULL;
    Solution S;
    cout<<"1:insert in sorted manner\n2:print with duplicates\n3:print without duplicates\n";
    while(true){
        int ch;
        cin>>ch;
        switch (ch){
            case 1:
            int d;
            cout<<"enter value: ";
            cin>>d;
            S.insert(head,tail,d);
            break;

            case 2:
            cout<<"List with duplicates: ";
            S.print(head);
            cout<<endl;
            break;

            case 3:
            cout<<"List with no duplicates: ";
            S.print(S.removeduplicates(head));
            cout<<endl;
            break;

            case 4:
            return false;
            break;

        }
    }
}