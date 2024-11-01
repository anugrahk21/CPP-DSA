#include <iostream>
using namespace std;

//Queue using linked list

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void enqueue(Node* &head, Node* &tail, int data){
    cout << "Customer ID " << data << " is enqueued" << endl;
    Node* newNode = new Node(data);
    if(head == NULL){
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeue(Node* &head, Node* &tail){
    if(head == NULL || tail == NULL){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Dequeued customer ID: " << head->data << endl;
    Node* temp = head;
    head = head->next;
    delete temp;
    if(head==NULL){ //if no elements in queue after dequeueing all.
        tail = NULL;
        cout<<"No more elements"<<endl;
    }
}

void display(Node* head,Node* &tail){
    if(head == NULL || tail==NULL){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Customer IDs in the queue are: ";
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int choice, data;
    Node* head = NULL; //front
    Node* tail = NULL; //rear
    cout<<"Enter 1 for insertion"<< endl;
    cout<<"Enter 2 for deletion"<< endl;
    cout<<"Enter 3 for display"<< endl;
    cout<<"Enter 4 to exit"<< endl;

    while(true){
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            cout<<"Enter value to insert: ";
            cin >> data;
            enqueue(head, tail, data);
        }
        else if(choice == 2){
            dequeue(head, tail);
        }
        else if(choice == 3){
            display(head,tail);
        }
        else if(choice == 4){
            cout<<"Exiting...";
            return 0;
        }
        else{
            cout << "Invalid option" << endl;
        }
    }

    return 0;
}