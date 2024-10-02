#include <iostream>
using namespace std;

//stack and its operational functions

void push(int &top,int value,int stack[],int MaxStackSize){
    if(top>=MaxStackSize-1){//stack overflow....stack starting from 0
        cout<<"Stack is full"<<endl;
        return;
    }
    stack[++top]=value; //first increment top then add to stack
};

void pop(int &top,int stack[]){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    };
    cout<<stack[top--]<<endl;
};

void peek(int &top,int stack[]){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    };
    cout<<stack[top]<<endl;
};

bool isEmpty(int &top){
    return top==-1;
    //another way to check
    // if(top==-1){
    //     return true;
    // }
    // else{
    //     return false;
    // }
};

bool isFull(int &top,int &MaxStackSize){
    return top==MaxStackSize-1; //because top is starting from 0
};

void displayall(int &top,int stack[],int &MaxStackSize){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    };
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    };
};

int main(){
    cout<<"Enter stack size: ";
    int MaxStackSize;
    cin>>MaxStackSize;
    cout<<endl;
    int stack[MaxStackSize];
    int top=-1;
    for(int i=0;i<MaxStackSize;++i){
        cout<<"Enter the value: ";
        int value;
        cin>>value;
        push(top,value,stack,MaxStackSize);
    };
    pop(top,stack); //deletes the last element(here it also prints the deleted element)
    peek(top,stack); //shows the last element(first on top)
    cout<<isEmpty(top)<<endl; //0 if false and 1 if true
    cout<<isFull(top,MaxStackSize)<<endl; //0 if false and 1 if true
    push(top,16,stack,MaxStackSize);
    push(top,177,stack,MaxStackSize);
    cout<<isFull(top,MaxStackSize)<<endl;// 0 if false and 1 if true
    displayall(top,stack,MaxStackSize);
    return 0;

    
}