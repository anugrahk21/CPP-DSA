#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node2{
    int data;
    struct node2* next;
};

//function for inserting
void insert_begin(node2** head_ref,int data){
    node2* newnode = new node2;
    newnode->data = data;
    newnode->next=*head_ref;
    *head_ref=newnode;
}

//function for executing, printing linked list.
void usingforloop(){
    node2* head=NULL;
    int n;
    cout<<"How many nodes: ";
    cin>>n;

    //using for loop.
    
    for(int i=0;i<n;i++){
        node2* newnode=new node2;
        cout<<"Enter data for node "<<i+1<<": ";
        int data;
        cin>>data;
        insert_begin(&head,data);

    };

    node2* temp=head;
    cout<<"Data inserted :";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    
}

int main(){
    //without using functions and for loops.
    node* head=NULL;
    node* newnode=new node;
    newnode->data=101;
    newnode->next=head;
    head=newnode;

    newnode=new node;
    newnode->data=102;
    newnode->next=head;
    head=newnode;

    newnode=new node;
    newnode->data=103;
    newnode->next=head;
    head=newnode;

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    usingforloop();

}