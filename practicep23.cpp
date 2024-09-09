#include <iostream>
using namespace std;

//linked list

struct Node {
    int data;
    Node* next;
};
int main(){
    Node* head = NULL;
    head=new Node;
    head->data =10;
    head->next = NULL;

    Node* second=NULL;
    second=new Node;
    second->data=20;
    second->next =NULL;

    head->next = second;

    Node* third=NULL;
    third=new Node;
    third->data=30;
    third->next = NULL;

    second->next = third;

    cout << "Linked List created successfully." << endl;

    cout <<"Data inside head node: "<< head->data;
    cout << "\nData inside second node: "<< head->next->data;
    cout << "\nData inside third node: "<< head->next->next->data;

    //or

    // cout <<"Data inside head node: "<< head->data;
    // cout << "\nData inside second node: "<< second->data;
    // cout << "\nData inside third node: "<< third->data;

    Node* temp = head;  // temp is used to traverse the linked list
    while(temp!=NULL){
        cout << "\nData inside node: "<< temp->data;
        temp=temp->next;
    }
    return 0;
}