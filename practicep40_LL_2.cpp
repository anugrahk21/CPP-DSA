#include <iostream>
using namespace std;
//LL for insert nodes in such a way that the linked list remains sorted after insertion.
//insert a node with that value at the appropriate position to maintain the sorted order.
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    };
};
void insertatHead(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;

}

void insertatEnd(Node* &head,Node* &tail,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    };
    tail->next=newNode;
    tail=newNode;
}

void insertatMid(Node* &head,Node* &tail,int position,int data){
    if(position==1){
        insertatHead(head,tail,data);
        return;
    }
    Node* temp=head;
    int p=1;
    while(p<position-1){// why pos-1;
        temp=temp->next;//actually going to the  next node.
        p=p+1;
    };
    //if we entered last pos(if len is 5 and we entered 6)->temp is 5 so temp->next is NULL.
    if(temp->next==NULL){
        insertatEnd(head,tail,data);
        return;
    }
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;


};

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

};
int find(int a,Node* &head){
    Node* temp=head;
    bool tf=false;
    int k=1;
    while(temp!=NULL){
        if((temp->data)<a){
            tf=true;
            k=k+1;
        }
        else{
            break;
        }
        temp=temp->next;
    }
    return k;
}


int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int j;
        cin>>j;
        insertatEnd(head,tail,j);
        
        
    };
    int r;
    cin>>r;
    int y=find(r,head);
    insertatMid(head,tail,y,r);
    display(head);
}