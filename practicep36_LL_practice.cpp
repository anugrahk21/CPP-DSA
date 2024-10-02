#include <iostream>
using namespace std;
//LL for inserting at tail, head, middle, searching.
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


}
void deleteAtStart(Node* &head,int pos){
    
}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    };

}

bool find(int a,Node* &head){
    Node* temp=head;
    bool tf=false;
    while(temp!=NULL){
        if((temp->data)==a){
            tf=true;
            return tf;
        }
        temp=temp->next;
    }
    return tf;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int data;
    cout<<"AT HEAD"<<endl;
    for(int i=0;i<5;++i){
        cin>>data;
        insertatHead(head,tail,data); 
    };
    cout<<"AT TAIL"<<endl;
    for(int i=0;i<5;++i){
        cin>>data;
        insertatEnd(head,tail,data); 
    };
    display(head);
    cout<<endl;
    int position;
    cout<<"Position to insert: ";
    cin>>position;
    insertatMid(head,tail,position,200);
    display(head);
    cout<<endl;
    cout<<head->data;
    cout<<endl;
    cout<<tail->data;
    cout<<endl;
    cout<<"Element to search: ";
    int a;
    cin>>a;
    if(find(a,head)){
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }

}
