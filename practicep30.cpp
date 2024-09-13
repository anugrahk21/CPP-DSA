#include <iostream>
using namespace std;

// insert data at end of head
struct node{
    int data;
    struct node* next;
};

void insert_end(node** head_ref,int data){
    node* newnode=new node;
    newnode->data=data;
    newnode->next=NULL;
    if(*head_ref==NULL){
        *head_ref=newnode;
    }
    else{
        node *temp=*head_ref;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=newnode;
    }

}
int main(){
    node* head=NULL;
    int n;
    cout<<"How many nodes: ";
    cin>>n;

    for(int i=0;i<n;i++){
        node* newnode=new node;
        cout<<"Enter data for "<<i+1<<" node";
        int data;
        cin>>data;
        insert_end(&head,data);
    }

    node *temp=head;
    cout<<"Data inserted: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

}