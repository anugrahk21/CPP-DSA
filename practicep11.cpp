// Problem Statement

// Preethi runs a small shop and wants to calculate the total cost of items based on their quantity.
// Write a program that helps Preethi by implementing a class Item with inline methods to 
// set item details (number and cost) and to calculate the total cost. 
// The program should read item details and quantity from the user, and then display the total cost.

#include <iostream>
using namespace std;

class Item{
    public:
    int inum=0;
    float icost=0.0;
    int q;
    inline void setitem(int num,float cost,int qu){
        inum=num;
        icost=cost;
        q=qu;
    }
    inline void tcost(){
        float cc=0;
        cc=q*icost;
        printf("Total cost: %.2f",cc);
        
    }
};
int main(){
    Item i1;
    int a,c;
    float b;
    cin>>a;
    cin>>b;
    cin>>c;
    i1.setitem(a,b,c);
    i1.tcost();
}

//2nd program
// Write a program that reads the number of participants and their details (ID and name) for an event.
// Implement a class Event to store participant information and keep track of the total number 
// of participants using a static member variable. 
// The program should display the total number of participants at the end.

#include <iostream>
using namespace std;

class Event{
    public:
    static int count;
    int id=0;
    string name="";
};

int Event::count;
int mainn(){
    Event e1;
    int k;
    cin>>k;
    for(int i=1;i<=k;++i){
        int idd;
        string namee;
        cin>>idd;
        cin>>namee;
        e1.count++;//or make a separate function inside event for adding.
    };
    cout<<"Total Participants: "<<e1.count;
    
};