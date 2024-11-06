#include <iostream>
using namespace std;

//queue using array

void enqueue(int queue[], int maxs, int &front, int &rear, int &data){
    if(rear>=maxs){
        cout<<"Queue is full"<<endl;
        return;
    };
    if(front==-1){
        front++;
    };
    rear++;
    queue[rear]=data;
};

void dequeue(int queue[], int maxs, int &front, int &rear){
    if(front==-1||front>rear){
        cout<<"Queue is empty"<<endl;
        return;
    };
    cout<<"Dequeued "<<queue[front]<<endl;
    front++;
};

void display(int queue[], int &front, int &rear){
    if(front==-1 || front>=rear){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue elements are: ";
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
};

int main(){
    int maxs;
    int front=-1;
    int rear=-1;
    cout<<"Size of the queue: ";
    cin>>maxs;
    int queue[maxs];
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    while(true){
        int choice;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            int data;
            cout<<"Enter data for queue: "<<rear+2<<": ";
            cin>>data;
            enqueue(queue,maxs, front, rear, data);
            break;

            case 2:
            dequeue(queue, maxs, front, rear);
            break;

            case 3:
            display(queue, front, rear);
            break;

            case 4:
            return 0;

            default:
            cout<<"Invalid choice! Try again."<<endl;

        }
        
    }
}