#include <iostream>
using namespace std;

//max heap

void insertmaxheap(int data,int heap[],int &size){
    heap[size]=data;
    size++;
    int i=size-1;
    while(i!=0 && heap[((i-1)/2)]<heap[i]){
        swap(heap[((i-1)/2)],heap[i]);
        i=heap[((i-1)/2)];
    }
};


void insertminheap(int data,int heap[],int &size){
    heap[size]=data;
    size++;
    int i=size-1;
    while(i!=0 && heap[((i-1)/2)]>heap[i]){
        swap(heap[((i-1)/2)],heap[i]);
        i=(i-1)/2;
    }
};

void maxheapify(int heap[],int s,int i){
    int largest=i;
    int leftIndexx=2*i+1;
    int rightIndexx=2*i+2;
    if(rightIndexx<s && heap[rightIndexx]>heap[i]){
        largest=rightIndexx;
    }
    if(leftIndexx<s && heap[leftIndexx]>heap[i]){
        largest=leftIndexx;
    }
    if(largest!=i){
        swap(heap[i],heap[largest]);
        maxheapify(heap,s,largest);
    }
}

void buildmaxheap(int heap[],int s){
    for(int i=s/2-1;i>=0;--i){
        maxheapify(heap,s,i);
    }
}

void deletemaxheap(int heap[],int &s){
    if(s==0){
        cout<<"Empty heap."<<endl;
        return;
    };
    heap[0]=heap[s-1];
    s--;
    int i=0;
    while(i<s){
        int rightIndex=2*i+2;
        int leftIndex=2*i+1;
        if(rightIndex<s && heap[rightIndex]>heap[i]){
            swap(heap[i],heap[rightIndex]);
            i=rightIndex;
        }
        else if(leftIndex<s && heap[leftIndex]>heap[i]){
            swap(heap[i],heap[leftIndex]);
            i=leftIndex;
        }
        else{
            cout<<"No child"<<endl;
            break;
        }
    }
}

void display(int size,int displayheap[]){
    for(int i=0;i<size;++i){
        cout<<displayheap[i]<<" ";
    };
    cout<<endl;
}
int main(){
    int s=0;
    int maxheap[100];
    int minheap[100];
    bool existmaxheap=false;
    bool existminheap=false;
    while(1){
        int opt;
        cin>>opt;
        int d;
        switch (opt){

            case 1:
                existmaxheap=true;
                cout<<"insertion of max heap"<<endl;
                cout<<"data: ";
                cin>>d;
                insertmaxheap(d,maxheap,s);
                break;
            
            case 2:
                existminheap=true;
                cout<<"insertion of min heap"<<endl;
                cout<<"data: ";
                cin>>d;
                insertminheap(d,minheap,s);
                break;
            
            case 3:
                if (existmaxheap) {
                    display(s, maxheap);
                } else {
                    cout << "nomaxheap"<<endl;
                };

                if (existminheap) {
                    display(s, minheap);
                } else {
                    cout << "nominheap"<<endl;
                };
                break; 
        }
    }
}