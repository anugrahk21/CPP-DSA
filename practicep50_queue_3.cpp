#include <iostream>
using namespace std;

//Circular queue

void enqueue(int queue[],int &rear,int &front,int &data,int maxsize){
    if((rear+1)%maxsize==front){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(front==-1){
        front=0;
    }
    rear=(rear+1)%maxsize;
    queue[rear]=data;
    cout<<"Enqueued "<<data<<endl;
};

void dequeue(int queue[], int &front,int &rear,int maxsize){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    };

    cout<<"Dequeued "<<queue[front]<<endl;
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=(front+1)%maxsize;
    };
};

void display(int queue[], int &front,int &rear,int maxsize){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    };

    int i=front;
    cout<<"Queue: ";
    while(true){
        cout<<queue[i]<<" ";
        if(i==rear){
            break;
        }
        i=(i+1)%maxsize;
    }
    cout<<endl;


}

int main(){
    int front=-1;
    int rear=-1;
    int maxs;
    cout<<"Enter the maximum size of the queue: ";
    cin>>maxs;
    int queue[maxs];

    cout<<"1. Insertion"<<endl;
    cout<<"2. Deletion"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:
            int data;
            cout<<"Enter the element: ";
            cin>>data;
            enqueue(queue,rear,front,data,maxs);
            break;

            case 2:
            dequeue(queue,front,rear,maxs);
            break;

            case 3:
            display(queue,front,rear,maxs);
            break;

            case 4:
            cout<<"Exiting...";
            return 0;

            default:
            cout<<"Invalid choice. Please try again."<<endl;

        }
    }
}